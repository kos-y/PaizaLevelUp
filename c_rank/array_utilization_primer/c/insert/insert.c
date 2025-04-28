// Paiza 問題集 配列活用メニュー 指定位置への要素の追加 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__insert
#include <stdio.h>
#include <stdlib.h>

int** input(int n);
void insert(int** ppa, int n, int in, int b);
void output(int** ppa, int n);
void dispose(int** ppa, int n);

int main()
{
    int n, in, b;

    scanf("%d", &n);
    int** ppa = input(n);
    scanf("%d %d", &in, &b);
    insert(ppa, n, in, b);
    output(ppa, n);
    dispose(ppa, n);
    return 0;
}

int** input(int n)
{
    int** ppa = (int**)calloc(n + 1, sizeof(int*));

    for (int i = 0; i < n; i++) {
        ppa[i] = (int*)malloc(sizeof(int));
        scanf("%d", ppa[i]);
    }

    return ppa;
}

void insert(int** ppa, int n, int in, int b)
{
    for (int i = n; i > in; i--) {
        ppa[i] = ppa[i - 1];
    }

    ppa[in] = (int*)malloc(sizeof(int));
    *ppa[in] = b;
}

void output(int** ppa, int n)
{
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d\n", *ppa[i]);
    }
}

void dispose(int** ppa, int n)
{
    n++;

    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }
    free(ppa);
}