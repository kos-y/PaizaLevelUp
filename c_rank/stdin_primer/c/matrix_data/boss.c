// Paiza 問題集 標準入力メニュー 【N 行 M 列のデータの入力】行ごとに要素数の異なる整数列の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_boss
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;

        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            int a;

            scanf("%d", &a);
            printf("%d", a);
            if (j < m - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}