#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b);

int main()
{
    int n;
    scanf("%d ", &n);
    
    char ca[1010];
    fgets(ca, sizeof(ca), stdin);
    
    int* a = (int*)calloc(n, sizeof(int));
    char* p = strtok(ca, " ");
    for (int i = 0; p != NULL; i++) {
        a[i] = atoi(p);
        p = strtok(NULL, " ");
    }
    
    qsort(a, n, sizeof(int), cmp);
    
    printf("%d %d", a[n - 1], a[0]);

    return 0;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}