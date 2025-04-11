#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    int q;
    scanf("%d", &q);
    int* pb = (int*)malloc(sizeof(int)* q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &pb[i]);
    }

    for (int i = 0; i < q; i++) {
        printf("%d\n", pa[pb[i] - 1]);
    }

    free(pa);
    free(pb);
    return 0;
}