#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

int cmp(const void* a, const void* b);

int main()
{
    char* s[] = {"zaipa", "izapa", "paiza"};
    
    qsort(s, NELEMS(s), sizeof(char*), cmp);
    for(int i = 0; i < NELEMS(s); i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}

int cmp(const void* a, const void* b)
{
    char** pa = (char**)a;
    char** pb = (char**)b;

    return strcmp(*pa, *pb);
}