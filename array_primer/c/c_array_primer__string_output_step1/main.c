#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "Hello", "paiza", "1234", "pa13" };
    
    printf("%lu\n", NELEMS(sz));
    return 0;
}