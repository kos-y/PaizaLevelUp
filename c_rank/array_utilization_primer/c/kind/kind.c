#include <stdio.h>
#include <stdlib.h>

int* input(int n);
int kind(int* a, int n);
int cmp(const void* a, const void* b);

int main()
{
    int n;

    scanf("%d ", &n);
    int* a = input(n);
    printf("%d\n", kind(a, n));
    free(a);
    return 0;
}

int* input(int n)
{
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

int kind(int* a, int n)
{
    int k = 1;

    qsort(a, n, sizeof(int), cmp);
    for (int i = 1; i < n; i++) {
        if (a[i - 1] != a[i]) {
            k++;
        }
    }

    return k;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
