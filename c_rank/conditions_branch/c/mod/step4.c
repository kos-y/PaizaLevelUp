#include <stdio.h>

int main()
{
    const char* w[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int x;

    scanf("%d", &x);
    printf("%s\n", w[(x - 1) % 7]);
    return 0;
}