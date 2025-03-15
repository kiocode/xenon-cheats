#include <windows.h>
#include <fstream>

DWORD WINAPI ATTACH(LPVOID lpParam) {
    MessageBox(NULL, "test", "test", MB_OK);
    return 0;
}

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hInstance);
        CreateThread(nullptr, 0, ATTACH, hInstance, 0, nullptr);
    }
    return TRUE;
}
