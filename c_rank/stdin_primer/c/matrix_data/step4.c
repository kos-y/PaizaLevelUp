// Paiza 問題集 標準入力メニュー N 行 M 列の整数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_step4
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
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