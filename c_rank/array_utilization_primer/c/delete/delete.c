// Paiza 問題集 配列活用メニュー 指定要素の削除 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__delete
#include <stdio.h>
#include <stdlib.h>

int** input(int n);
void delete(int** ppa, int n, int d);
void output(int** ppa);
void dispose(int** ppa);

int main()
{
    int n, d;

    scanf("%d", &n);
    int** ppa = input(n);
    scanf("%d", &d);
    delete(ppa, n, d);
    output(ppa);
    dispose(ppa);
    return 0;
}

int** input(int n)
{
    int** ppa = (int**)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        ppa[i] = (int*)malloc(sizeof(int));
        scanf("%d", ppa[i]);
    }

    return ppa;
}

void delete(int** ppa, int n, int d)
{
    d--;
    free(ppa[d]);
    while (d < n - 1) {
        ppa[d] = ppa[d + 1];
        d++;
    }
    ppa[d] = NULL;
}

void output(int** ppa)
{
    for (int i = 0; ppa[i] != NULL; i++) {
        printf("%d\n", *ppa[i]);
    }
}

void dispose(int** ppa)
{
    for (int i = 0; ppa[i] != NULL; i++) {
        free(ppa[i]);
    }
    free(ppa);
}
