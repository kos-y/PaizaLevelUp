// Paiza 問題集 配列活用メニュー 重複要素の削除 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__unique
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NONE -1

int** input(int n);
int** unique(int** ppa, int n);
void output(int** ppa, int n);
void dispose(int** ppa, int** ppb, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int** ppa = input(n);
    int** ppb = unique(ppa, n);
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

int** unique(int** ppa, int n)
{
    int** ppb = (int**)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        ppb[i] = (int*)malloc(sizeof(int));
        *ppb[i] = NONE;
    }

    int c = 0;
    for (int i = 0; i < n; i++) {
        bool find = false;
        for (int j = 0; j < c; j++) {
            if (*ppa[i] == *ppb[j]) {
                find = true;
                break;
            }
        }
        if (!find) {
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