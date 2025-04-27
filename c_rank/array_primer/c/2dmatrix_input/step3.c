// Paiza 問題集 配列メニュー 二次元配列の入力 3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_input_step3
#include <stdio.h>
#define M 5

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            int v;

            scanf("%d", &v);
            printf("%d", v);
            if (j < M - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}