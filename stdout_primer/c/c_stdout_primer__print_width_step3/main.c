#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *pm = (int*)malloc(sizeof(int)* n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pm[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%3d\n", pm[i]);
    }

    free(pm);
    return 0;
}