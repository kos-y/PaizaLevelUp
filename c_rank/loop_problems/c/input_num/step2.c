#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pk = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pk[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", pk[i]);
    }
    free(pk);
    return 0;
}