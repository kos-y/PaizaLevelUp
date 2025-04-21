// Paiza 問題集 3 行 3 列の整数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_step1
#include <stdio.h>

#define N 3

int main()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int a;

            scanf("%d", &a);
            printf("%d", a);
            if (j < N - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}