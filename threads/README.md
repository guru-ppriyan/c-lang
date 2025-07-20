//Threads allow a program to do multiple things at the same time (concurrently). Instead of waiting for one task to finish before starting another, you can split tasks into independent units (threads) that run in parallel (on multi-core CPUs) or concurrently (on a single core via time-sharing).

In C, threads allow you to run multiple tasks concurrently within the same process. The most common way to work with threads in C (on Unix-like systems like Linux or macOS) is using the POSIX Threads library (pthread).

Key Functions
Function	Description
pthread_create()	Creates a new thread
pthread_join()	Waits for a thread to finish
pthread_exit()	Terminates the current thread
pthread_self()	Returns the ID of the calling thread
pthread_mutex_*	Functions to lock/unlock mutexes (for thread safety)

Use Cases of Threads in C

1. Multithreaded Servers
Each client connection handled by a separate thread.

Example: Web server (doesnt note everyone)\doesnt give always available , chat server(always available -web socket). //database 

2. Parallel Data Processing
Large datasets processed in chunks by multiple threads.

Example: Matrix multiplication, image processing.

3. Background Tasks
File downloading, logging(data security, record activities ), or data saving without blocking the main task.

Example: Game engines or desktop apps.

4. Real-time Systems
Use threads for tasks like reading sensor data, updating displays,



Works on Linux/macOS. On Windows, use Windows Threads or pthreads-win32.

Always compile with -pthread for POSIX thread support.

Use mutexes or semaphores to handle race conditions when accessing shared variables.
#include <pthread.h>

Use Windows Native Threads (WinAPI)
Replace pthread.h with Windows threads using <windows.h>:
No pthread.h needed here. Use this for native Windows development.