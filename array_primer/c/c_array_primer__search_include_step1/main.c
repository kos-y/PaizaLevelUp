#include <stdio.h>
#include <stdbool.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main()
{
    int a[] = {10, 13, 21, 1, 6, 51, 10, 8, 15, 6};
    bool find = false;

    for (int i = 0; i < NELEMS(a); i++) {
        if (a[i] == 6) {
            find = true;
            break;
        }
    }

    printf("%s\n", find ? "Yes" : "No");
    return 0;
}