/**
 * @file memory_service.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Memory service component.
 * @details This component is responsible for reading and writing to the memory of a process.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>

#include <string>
#include <windows.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <stdexcept>

/**
 * @brief Memory service component.
 * @details This component is responsible for reading and writing to the memory of a process.
 * 
 */
class CMemoryService : public CComponent {
public:

    /**
     * @brief Attach to a game.
     * @param path Path to the game executable.
     */
    void AttachGame(std::string path);

    /**
     * @brief Get the module address.
     * @param moduleName Name of the module.
     * @return Address of the module.
     */
    const std::uintptr_t GetModuleAddress(const std::string_view moduleName) const noexcept;

    /**
     * @brief Deattach from a game.
     */
    void DeattachGame();

    /**
     * @brief Check if the game is running.
     * @return True if the game is running, false otherwise.
     */
    bool IsGameRunning() const noexcept;

    /**
     * @brief Read a pointer.
     * @param address Address to read the pointer from.
     * @return Pointer value.
     */
    uintptr_t ReadPointer(const std::uintptr_t& address);

    /**
     * @brief Write a pointer.
     * @param address Address to write the pointer to.
     * @param value Value to write to the pointer.
     */
    void WritePointer(const std::uintptr_t& address, const uintptr_t& value);

    /**
     * @brief Read a value.
     * @param address Address to read the value from.
     * @return Value.
     */
    template <typename T>
    constexpr const T Read(const std::uintptr_t& address) const noexcept
    {
        T value = { };
        ::ReadProcessMemory(m_hProcessHandle, reinterpret_cast<const void*>(address), &value, sizeof(T), NULL);
        return value;
    }

    /**
     * @brief Write a value.
     * @param address Address to write the value to.
     * @param value Value to write to the address.
     */
    template <typename T>
    constexpr void Write(const std::uintptr_t& address, const T& value) const noexcept
    {
        ::WriteProcessMemory(m_hProcessHandle, reinterpret_cast<void*>(address), &value, sizeof(T), NULL);
    }

private:
    std::string m_strGameAbsolutePath;
    std::string m_strProcessName;
    HANDLE m_hProcessHandle; 
    int m_nPid;
};
