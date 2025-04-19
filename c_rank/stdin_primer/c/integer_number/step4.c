// Paiza 問題集 標準入力メニュー 2 行目で与えられる N 個の整数の入力 (large) C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__integer_number_step4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    return 0;
}