#include <stdio.h>

#define NELEMS(x) sizeof(x) / sizeof(x[0])

struct V {
    int* v;
    size_t s;
};

int main()
{
    int v1[] = {1};
    int v2[] = {2, 3};
    int v3[] = {4, 5, 6};
    struct V v[] = {
        { v1, NELEMS(v1) },
        { v2, NELEMS(v2) },
        { v3, NELEMS(v3) }
    };

    for (int i = 0; i < NELEMS(v); i++) {
        printf("%d\n", v[i].s);
    }

    return 0;
}