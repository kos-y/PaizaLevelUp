#include <stdio.h>

int main()
{
    int i;

    for (i = 10000; i % 13 != 0; i++);
    printf("%d\n", i);
    return 0;
}