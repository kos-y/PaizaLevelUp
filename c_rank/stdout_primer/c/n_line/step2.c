// Paiza 問題集 標準出力メニュー 数行の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__n_line_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}