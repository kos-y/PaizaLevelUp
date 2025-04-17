#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b);

int main()
{
    int n;

    scanf("%d ", &n);
    int* a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    
    free(a);
    return 0;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
