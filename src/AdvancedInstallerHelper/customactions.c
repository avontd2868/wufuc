#include "stdafx.h"

UINT __stdcall UnloadCustomAction(MSIHANDLE hInstall)
{
        HANDLE hEvent;

        hEvent = OpenEventW(EVENT_MODIFY_STATE, FALSE, L"Global\\wufuc_UnloadEvent");
        if ( hEvent ) {
                SetEvent(hEvent);
                CloseHandle(hEvent);
        }
        return ERROR_SUCCESS;
}
