#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    int* pb = (int*)calloc(k, sizeof(int));
    for (int i = 0; i < k; i++) {
        scanf("%d", &pb[i]);
    }

    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (m < pa[i] * pb[j]) {
                m = pa[i] * pb[j];
            }
        }
    }

    printf("%d\n", m);
    free(pa);
    free(pb);
    return 0;
}
