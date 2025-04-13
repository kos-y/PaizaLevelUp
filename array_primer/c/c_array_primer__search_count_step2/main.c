#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int count(int* a, int n, size_t sz);

int main()
{
    int n;
    int a[] = {1, 2, 5, 1, 4, 3, 2, 5, 1, 4};

    scanf("%d", &n);
    printf("%d\n", count(a, n, NELEMS(a)));
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