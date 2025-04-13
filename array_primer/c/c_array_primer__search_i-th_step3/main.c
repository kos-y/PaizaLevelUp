#include <stdio.h>
#include <stdlib.h>

int indexof(int* a, int n, size_t sz);

int main()
{
    int n, m;
    int* a;

    scanf("%d %d", &n, &m);
    a = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", indexof(a, n, m) + 1);
    free(a);
    return 0;
}

int indexof(int* a, int n, size_t sz)
{
    for (int i = 0; i < sz; i++) {
        if (a[i] == n) {
            return i;
        }
    }

    return -1;
}