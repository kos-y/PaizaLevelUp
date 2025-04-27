// Paiza 問題集 配列メニュー 配列のソート C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_sort
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* x, const void* y);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(a[0]), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}

int cmp(const void* x, const void* y)
{
    const int* a = (const int*)x;
    const int* b = (const int*)y;

    if (*a < *b) {
        return -1;
    }
    else if (*a == *b) {
        return 0;
    }
    else {
        return 1;
    }
}