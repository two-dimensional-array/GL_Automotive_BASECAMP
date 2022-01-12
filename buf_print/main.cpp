#include "buf_print.hpp"
#include <cstdio>
#include <thread>

#define STRINGS_COUNT 100
#define STRINGS_TEXT  "Hello Word"

float Time_Printf();
float Time_BufPrint();

int main()
{
    float time_printf = Time_Printf();
    float time_BufPrint = Time_BufPrint();
    printf("Time printf:   %f\n", time_printf);
    printf("Time BufPrint: %f\n", time_BufPrint);
    if (time_printf < time_BufPrint)
    {
        printf("printf is faster BufPrint on %f s\n", (time_BufPrint - time_printf));
    }
    else
    {
        printf("BufPrint is faster printf on %f s\n", (time_printf - time_BufPrint));
    }
    return 0;
}

float Time_Printf()
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < STRINGS_COUNT; i++)
    {
        printf(STRINGS_TEXT);
    }
    printf("\n");
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> delta = (stop - start);
    return delta.count();
}

float Time_BufPrint()
{
    BufPrint printer;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < STRINGS_COUNT; i++)
    {
        printer.Print(STRINGS_TEXT);
    }
    printer.Print("\n");
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> delta = (stop - start);
    return delta.count();
}
