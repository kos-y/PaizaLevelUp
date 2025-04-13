#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "eight", "one", "three", "paiza", "pa13", "813" };

    for (int i = 0; i < NELEMS(sz); i++) {
        printf("%s\n", sz[i]);
    }    
    return 0;
}