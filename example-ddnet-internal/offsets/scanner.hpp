#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <cstring>

// CGameClient vtable RVA inside DDNet.exe (debug build, Oct 2026).
// IDA: ??_7CGameClient@@6B@ at 0x1414b99a8, imagebase 0x140000000  =>  RVA 0x14b99a8
static constexpr uintptr_t CGAMECLIENT_VTABLE_RVA = 0x14b99a8u;

static inline bool IsHeapReadable(const void* p, SIZE_T len = 8)
{
    if (!p) return false;
    MEMORY_BASIC_INFORMATION mbi{};
    if (!VirtualQuery(p, &mbi, sizeof(mbi))) return false;
    if (mbi.State != MEM_COMMIT) return false;
    if (mbi.Type  != MEM_PRIVATE) return false;
    if (!(mbi.Protect & PAGE_READWRITE)) return false;
    if (mbi.Protect & PAGE_GUARD) return false;
    return (const BYTE*)p + len <= (const BYTE*)mbi.BaseAddress + mbi.RegionSize;
}

static inline bool IsAnyReadable(const void* p, SIZE_T len = 8)
{
    if (!p) return false;
    MEMORY_BASIC_INFORMATION mbi{};
    if (!VirtualQuery(p, &mbi, sizeof(mbi))) return false;
    if (mbi.State != MEM_COMMIT) return false;
    const DWORD ok = PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY |
                     PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;
    if (!(mbi.Protect & ok)) return false;
    if (mbi.Protect & PAGE_GUARD) return false;
    return (const BYTE*)p + len <= (const BYTE*)mbi.BaseAddress + mbi.RegionSize;
}

inline void* FindGameClient()
{
    const uintptr_t exeBase = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
    const uintptr_t vtable  = exeBase + CGAMECLIENT_VTABLE_RVA;

    SYSTEM_INFO si;
    GetSystemInfo(&si);

    MEMORY_BASIC_INFORMATION mbi{};
    auto* addr = static_cast<BYTE*>(si.lpMinimumApplicationAddress);

    while (addr < static_cast<BYTE*>(si.lpMaximumApplicationAddress))
    {
        if (!VirtualQuery(addr, &mbi, sizeof(mbi)))
        {
            addr += 4096;
            continue;
        }

        const bool isHeap = (mbi.State   == MEM_COMMIT)   &&
                            (mbi.Type    == MEM_PRIVATE)   &&
                            (mbi.Protect & PAGE_READWRITE) &&
                            !(mbi.Protect & PAGE_GUARD);

        if (isHeap)
        {
            const auto* base  = reinterpret_cast<const uintptr_t*>(mbi.BaseAddress);
            const SIZE_T words = mbi.RegionSize / sizeof(uintptr_t);

            for (SIZE_T i = 0; i < words; ++i)
            {
                if (base[i] != vtable) continue;

                const void* pObj = &base[i];
                if (!IsHeapReadable(pObj, 16)) continue;

                const uintptr_t* fields = reinterpret_cast<const uintptr_t*>(pObj);
                const void* pKernel = reinterpret_cast<const void*>(fields[1]);
                if (!IsAnyReadable(pKernel, 8)) continue;

                const void* kernelVtable = *reinterpret_cast<const void* const*>(pKernel);
                if (!IsAnyReadable(kernelVtable, 8)) continue;

                return const_cast<void*>(pObj);
            }
        }

        addr = static_cast<BYTE*>(mbi.BaseAddress) + mbi.RegionSize;
    }
    return nullptr;
}
