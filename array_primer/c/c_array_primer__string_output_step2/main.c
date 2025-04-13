#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "good", "morning", "paiza", "813", "pa13" };

    for (int i = 0; i < NELEMS(sz); i++) {
        printf("%s\n", sz[i]);
    }    
    return 0;
}