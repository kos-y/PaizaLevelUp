#include <stdio.h>
#include <stdlib.h>

#define NONE -1

int** input(int n);
int** filter(int** ppa, int n, int k);
void output(int** ppa, int n);
void dispose(int** ppa, int** ppb, int n);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int** ppa = input(n);
    int** ppb = filter(ppa, n, k);
    output(ppb, n);
    dispose(ppa, ppb, n);
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

int** filter(int** ppa, int n, int k)
{
    int** ppb = (int**)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        ppb[i] = (int*)malloc(sizeof(int));
        *ppb[i] = NONE;
    }

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*ppa[i] >= k) {
            *ppb[c++] = *ppa[i];
        }
    }

    return ppb;
}

void output(int** ppa, int n)
{
    for (int i = 0; i < n && *ppa[i] != NONE; i++) {
        printf("%d\n", *ppa[i]);
    }
}

void dispose(int** ppa, int** ppb, int n)
{
    for (int i = 0; i < n; i++) {
        free(ppa[i]);
        free(ppb[i]);
    }

    free(ppa);
    free(ppb);
}