// Paiza 問題集 標準入力メニュー 3 行 M 列の整数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_step3
#include <stdio.h>
#define N 3

int main()
{
    int m;
    scanf("%d", &m);

    for (int i = 0; i < N; i++) {
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