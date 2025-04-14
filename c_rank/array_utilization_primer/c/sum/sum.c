#include <stdio.h>
#include <stdlib.h>

int* input(int n);
int sum(int* a, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = input(n);
    printf("%d\n", sum(a, n));
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

int sum(int* a, int n)
{
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += a[i];
    }

    return s;
}