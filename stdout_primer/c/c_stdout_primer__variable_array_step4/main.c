#include <stdio.h>
#include <stdlib.h>

void loop(int s, int e);

int main()
{
    int n;
    scanf("%d", &n);

    int* pm = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &pm[i]);
    }

    for (int i = 0; i < n; i++) {
        loop(1, pm[i]);
    }

    free(pm);
    return 0;
}

void loop(int s, int e)
{
    for (int i = s; i <= e; i++) {
        printf("%d", i);
        if (i < e) {
            printf(" ");
        }
    }
    printf("\n");
}