// Paiza 問題集 標準出力メニュー 九九表の出力 C編（paizaランク D 相当））
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_step3
#include <stdio.h>

#define N 9

int main()
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d", i * j);
            if (j < N) {
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}