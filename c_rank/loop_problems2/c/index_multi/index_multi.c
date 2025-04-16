#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pm = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pm[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", pm[i] * (i + 1));
    }

    free(pm);
    return 0;
}