// Paiza 問題集 配列メニュー 二次元配列の入力 4 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_input_step4
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int v;

            scanf("%d", &v);
            printf("%d", v);
            if (j < m - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}