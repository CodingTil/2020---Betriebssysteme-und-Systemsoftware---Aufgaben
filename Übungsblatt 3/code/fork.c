#include <stdio.h>
#include <unistd.h>

int main()
{
    if (fork() == 0)
    {
        if (fork() == 0)
            printf("B \n");
        else
            printf("u \n");
        printf("S \n");
    }
    else
    {
        fork();
        fork();
        printf("20 \n");
        if (fork() == 0)
            printf("Zwan \n");
        else
            printf("Zig \n");
    }
    return 0;
}