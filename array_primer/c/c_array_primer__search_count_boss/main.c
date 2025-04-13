#include <stdio.h>
#include <stdlib.h>

int count(int* a, int n, size_t sz);

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", count(a, n, m));
    free(a);
    return 0;
}

int count(int* a, int n, size_t sz)
{
    int c = 0;

    for (int i = 0; i < sz; i++) {
        if (a[i] == n) {
            c++;
        }
    }

    return c;
}