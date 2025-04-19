// Paiza 問題集 標準入力メニュー 5 行の整数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__integer_row_step3
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    return 0;
}