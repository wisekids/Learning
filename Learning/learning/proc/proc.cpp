#include "proc.h"


DWORD GetProcId(const wchar_t* procName) {
    DWORD procId = 0;

    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);


    if (hSnap != NULL)
    {
        PROCESSENTRY32 procEntry;
        procEntry.dwSize = sizeof(procEntry);


        do {
            if (_wcsicmp(procEntry.szExeFile, procName) == 0)
            {
                procId = procEntry.th32ProcessID;
                break;
            }
        } while (Process32Next(hSnap, &procEntry));
    }
    CloseHandle(hSnap);
    return procId;
}
