// 標準出力メニュー 【n * n の 2 次元配列の表示】N * N の九九表の出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_boss
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", i * j);
            if (j < n) {
                printf(" ");
            }
        }
 
        printf("\n");
    }

    return 0;
}