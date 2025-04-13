#include <stdio.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int indexof(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 5, 9, 7, 3, 2, 4, 8, 6, 10};
    int n;

    scanf("%d", &n);
    printf("%d\n", indexof(a, n, NELEMS(a)) + 1);
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