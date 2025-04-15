#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool find0(int* pa, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }
    printf("%s\n", !find0(pa, n) ? "YES" : "NO");
    return 0;
}

bool find0(int* pa, int n)
{
    for (int i = 0; i < n; i++) {
        if (pa[i] == 0) {
            return true;
        }
    }

    return false;
}