#include "proc/proc.h"
#include "offsets.h"
#include <iostream>


int main()
{
    std::cout << "Looking for process..." << std::endl;
    Sleep(2000);
    DWORD procId = GetProcId(L"ac_client.exe");

    if (procId != NULL)
    {

    }
    else
    {

    }
}
