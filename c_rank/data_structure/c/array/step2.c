// Paiza 問題集 データセット選択メニュー 複数回のランダムアクセス C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q;

    scanf("%d", &n);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int b;

        scanf("%d", &b);
        printf("%d\n", pa[b - 1]);
    }

    free(pa);
    return 0;
}