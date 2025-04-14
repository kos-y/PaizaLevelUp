#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* input(int n);
int maxint(int* a, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = input(n);
    printf("%d\n", maxint(a, n));
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

int maxint(int* a, int n)
{
    int m = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (m < a[i]) {
            m = a[i];
        }
    }

    return m;
}
