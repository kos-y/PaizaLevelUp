#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int count(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 2, 2, 1, 2, 1, 2, 1, 1, 1};

    printf("%d\n", count(a, 1, NELEMS(a)));
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