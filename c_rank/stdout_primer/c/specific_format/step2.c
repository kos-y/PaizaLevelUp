// Paiza 問題集 標準出力メニュー 文字列と N 個の整数の出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step2
#include <stdio.h>

int main()
{
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++) {
        printf("(%d, %d)", a, b);
        if (i < n) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}