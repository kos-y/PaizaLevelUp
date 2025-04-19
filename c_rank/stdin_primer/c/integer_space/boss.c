// Paiza 問題集 標準入力メニュー 【整数の半角スペース区切りの入力】1,000個の整数の半角スペース区切りの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__integer_space_boss
#include <stdio.h>

int main()
{
    for (int i = 0; i < 1000; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    return 0;
}