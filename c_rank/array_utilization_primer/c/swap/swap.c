// Paiza 問題集 配列活用メニュー 指定要素の入れ替え C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__swap
#include <stdio.h>
#include <stdlib.h>

int* input(int n);
void swap(int* a, int x, int y);
void output(int* a, int n);

int main()
{
    int n, x, y;

    scanf("%d", &n);
    int* a = input(n);
    scanf("%d %d", &x, &y);
    swap(a, --x, --y);
    output(a, n);
    free(a);
    return 0;
}

int* input(int n)
{
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

void swap(int* a, int x, int y)
{
    int t = a[x];
    a[x] = a[y];
    a[y] = t;
}

void output(int* a, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
