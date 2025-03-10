#include <xenon/components/services/memory_service.hpp>

#include <spdlog/spdlog.h>

void CMemoryService::AttachGame(std::string absExePath) {
    std::wstring widePath = std::wstring(absExePath.begin(), absExePath.end());
    m_strGameAbsolutePath = absExePath;

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        throw std::runtime_error("Failed to create process snapshot");
    }

    PROCESSENTRY32 processEntry{};
    processEntry.dwSize = sizeof(PROCESSENTRY32);

    bool found = false;

    while (Process32Next(snapshot, &processEntry)) {
        m_hProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processEntry.th32ProcessID);

        wchar_t exePath[MAX_PATH];
        if (GetModuleFileNameExW(m_hProcessHandle, nullptr, exePath, MAX_PATH)) {
            if (_wcsicmp(exePath, widePath.c_str()) == 0) {
                m_nPid = processEntry.th32ProcessID;

                std::wstring processName(processEntry.szExeFile, processEntry.szExeFile + strlen(processEntry.szExeFile));
                m_strProcessName = std::string(processName.begin(), processName.end());

                found = true;

                spdlog::info("Attached to process: {}", m_strProcessName);
                spdlog::debug("PID: {} - Path: {}", m_nPid, absExePath);

                break;
            }
        }

    }

    CloseHandle(snapshot);

    if (!found) {
        throw std::runtime_error("Failed to attach to process");
    }
}

void CMemoryService::DeattachGame()
{
    if (m_hProcessHandle == nullptr || m_hProcessHandle == INVALID_HANDLE_VALUE) {
        spdlog::error("Failed to close process");
        return;
    }

	::CloseHandle(m_hProcessHandle);
}

bool CMemoryService::IsGameRunning() const noexcept {
    if (m_hProcessHandle == nullptr) return true;

	if (m_hProcessHandle == INVALID_HANDLE_VALUE) {
		return false;
	}

	DWORD exitCode;
	GetExitCodeProcess(m_hProcessHandle, &exitCode);

	return exitCode == STILL_ACTIVE;
}

const uintptr_t CMemoryService::GetModuleAddress(const std::string_view moduleName) const noexcept {
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, m_nPid);
    if (snapshot == INVALID_HANDLE_VALUE) {
		return 0;
	}

	MODULEENTRY32 moduleEntry{};
	moduleEntry.dwSize = sizeof(MODULEENTRY32);

	uintptr_t result = 0;

    if (Module32First(snapshot, &moduleEntry)) {
        do {
            if (moduleName.compare(moduleEntry.szModule) == 0) {
				result = reinterpret_cast<uintptr_t>(moduleEntry.modBaseAddr);
				break;
			}
		} while (Module32Next(snapshot, &moduleEntry));
	}

	CloseHandle(snapshot);

	return result;
}   

uintptr_t CMemoryService::ReadPointer(const std::uintptr_t& address)
{
    if (m_hProcessHandle == nullptr || m_hProcessHandle == INVALID_HANDLE_VALUE) {
		throw std::runtime_error("Failed to read pointer, before AttachGame");
    }

    uintptr_t moduleAddr = GetModuleAddress(m_strProcessName);

    uintptr_t value = { };
    ::ReadProcessMemory(m_hProcessHandle, reinterpret_cast<const void*>(moduleAddr + address), &value, sizeof(uintptr_t), NULL);
    return value;
}

void CMemoryService::WritePointer(const std::uintptr_t& address, const uintptr_t& value)
{
    if (m_hProcessHandle == nullptr || m_hProcessHandle == INVALID_HANDLE_VALUE) {
		throw std::runtime_error("Failed to write pointer, before AttachGame");
    }

    ::WriteProcessMemory(m_hProcessHandle, reinterpret_cast<void*>(GetModuleAddress(m_strProcessName) + address), &value, sizeof(uintptr_t), NULL);
}
