#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int n, b;
    scanf("%d %d", &n, &b);

    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    bool f = false;
    for (int i = 0; i < n; i++) {
        if (pa[i] == b) {
            f = true;
            break;
        }
    }

    printf(f ? "Yes\n" : "No\n");
    free(pa);
    return 0;
}