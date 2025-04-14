#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* input(int n);
int minint(int* a, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = input(n);
    printf("%d\n", minint(a, n));
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

int minint(int* a, int n)
{
    int m = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (m > a[i]) {
            m = a[i];
        }
    }

    return m;
}
