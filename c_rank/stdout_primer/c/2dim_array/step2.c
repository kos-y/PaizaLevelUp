// Paiza 問題集 標準出力メニュー 3 * 3 の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_step2
#include <stdio.h>

#define N 9

int main()
{
    int n[N];

    for (int i = 0; i < N; i++) {
        scanf("%d ", &n[i]);

        printf("%d", n[i]);
        if (i % 3 == 2) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}