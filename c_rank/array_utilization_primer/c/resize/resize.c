#include <stdio.h>
#include <stdlib.h>

int** input(int n);
int** resize(int** ppa, int n, int n2);
void output(int** ppa, int n);
void dispose(int** ppa, int** ppb, int n, int n2);

int main()
{
    int n, n2;

    scanf("%d %d", &n, &n2);
    int** ppa = input(n);
    int** ppb = resize(ppa, n, n2);
    output(ppb, n2);
    dispose(ppa, ppb, n, n2);
    return 0;
}

int** input(int n)
{
    int** ppa = (int**)calloc(n, sizeof(int*));

    for (int i = 0; i < n; i++) {
        ppa[i] = (int*)malloc(sizeof(int));
        scanf("%d", ppa[i]);
    }

    return ppa;
}

int** resize(int** ppa, int n, int n2)
{
    int** ppb = (int**)calloc(n2, sizeof(int*));

    int i;
    for (i = 0; i < n && i < n2; i++) {
        ppb[i] = (int*)malloc(sizeof(int));
        *ppb[i] = *ppa[i];
    }
    for (; i < n2; i++) {
        ppb[i] = (int*)calloc(1, sizeof(int));
    }

    return ppb;
}

void output(int** ppa, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d\n", *ppa[i]);
    }
}

void dispose(int** ppa, int** ppb, int n, int n2)
{
    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }

    for (int i = 0; i < n2; i++) {
        free(ppb[i]);
    }

    free(ppa);
    free(ppb);
}
