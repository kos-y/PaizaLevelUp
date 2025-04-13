#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
#define M 11

int cmp(const void* a, const void* b);

int main()
{
    char s[N][M];

    for (int i = 0; i < N; i++) {
        scanf("%s", s[i]);
    }
    qsort(s, N, M, cmp);
    for(int i = 0; i < N; i++) {
        printf("%s\n", s[i]);
    }
    return 0;
}

int cmp(const void* a, const void* b)
{
    char* pa = (char*)a;
    char* pb = (char*)b;
    
    return strcmp(pa, pb);
}