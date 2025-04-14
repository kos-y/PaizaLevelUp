#include <stdio.h>
#include <stdlib.h>

void swap(int* pa, int* pb);

int main()
{
    int a, b, n;

    scanf("%d %d %d", &a, &b, &n);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    swap(&pa[a - 1], &pa[b - 1]);

    for (int i = 0; i < n; i++) {
        printf("%d\n", pa[i]);
    }

    free(pa);
    return 0;
}

void swap(int* pa, int* pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}