#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int indexof(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};

    printf("%d\n", indexof(a, 8, NELEMS(a)) + 1);
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