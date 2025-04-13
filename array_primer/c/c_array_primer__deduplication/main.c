#include <stdio.h>
#include <stdlib.h>

#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

int cmp(const void* a, const void* b);

int main()
{
    int a[] = {1, 3, 5, 1, 2, 3, 6, 6, 5, 1, 4};
    
    qsort(a, NELEMS(a), sizeof(int), cmp);
    
    int prev = -1;
    for (int i = 0; i < NELEMS(a); i++) {
        if (prev != a[i]) {
            printf("%d\n", a[i]);
            prev = a[i];
        }
    }
    
    return 0;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}