#include <windows.h>
#include <stdio.h>

DWORD WINAPI myThreadFunction(LPVOID arg) {
    printf("Hello from thread!\n");
    return 0;
}

int main() {
    HANDLE thread; //instead of pthread to acess
    DWORD threadId;
    
    /* | Component | Meaning                                           |
// | --------- | ------------------------------------------------- |
// | `DWORD`   | Return type (exit code)                           |
// | `WINAPI`  | Calling convention for Windows API                |
// | `LPVOID`  | Generic pointer to pass any data (cast as needed) |
| Component | Meaning                                           |
| --------- | ------------------------------------------------- |
| `DWORD`   | Return type (exit code)                           |
| `WINAPI`  | Calling convention for Windows API                |
| `LPVOID`  | Generic pointer to pass any data (cast as needed) |*/


    thread = CreateThread(NULL, 0, myThreadFunction, NULL, 0, &threadId);

    if (thread == NULL) {
        printf("Failed to create thread.\n");
        return 1;
    }

    // Wait for the thread to finish
    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);

    printf("Main thread exiting\n");
    return 0;
}