// Paiza 問題集 配列メニュー 二次元配列の入力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_input_step2
#include <stdio.h>

#define N 5

int main()
{
    int m;

    scanf("%d", &m);
    for (int i = 0; i < N; i++) {
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