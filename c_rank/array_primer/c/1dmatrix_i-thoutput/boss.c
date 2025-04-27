// Paiza 問題集 配列メニュー 【次元配列の入出力】i番目の出力 Boss C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_boss
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (i == k - 1) {
            printf("%d\n", a);
        }
    }

    return 0;
}