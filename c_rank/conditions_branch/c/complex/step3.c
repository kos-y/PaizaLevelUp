#include <stdio.h>
#include <stdlib.h>

int* input(int n);

int main()
{
    int n, c = 0;

    scanf("%d", &n);
    int* pa = input(n);
    int* pb = input(n);
    for (int i = 0; i < n; i++) {
        if (pa[i] == pb[i]) {
            c++;
        }
    }
    printf("%d\n", c);
    free(pa);
    free(pb);
    return 0;
}

int* input(int n)
{
    int* p = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    return p;
}
