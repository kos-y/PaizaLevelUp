#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d ", &n);
    int* pa = (int*)calloc(n ,sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (pa[i] % 2 != 0) {
            break;
        }
        sum += pa[i];
    }
    printf("%d\n", sum);
    return 0;
}