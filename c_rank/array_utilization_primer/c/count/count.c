#include <stdio.h>
#include <stdlib.h>

int count(int* a, int n, int k);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", count(a, n, k));
    free(a);
    return 0;
}

int count(int* a, int n, int k)
{
    int c = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            c++;
        }
    }

    return c;
}