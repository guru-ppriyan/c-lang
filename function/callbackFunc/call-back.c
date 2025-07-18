#include <stdio.h>

// prototype
void printNumber();
void recursiveCallback();

int main()
{

    // function calling
    recursiveCallback(1, printNumber);
    return 0;
}

// function declaration

void printNumber(int num)
{
    printf("%d\n", num);
}

void recursiveCallback(int v, void (*cb)(int))
{

    if (v == 11)
        return;
    cb(v);                        // function callback
    recursiveCallback(v + 1, cb); // function re-calling
}