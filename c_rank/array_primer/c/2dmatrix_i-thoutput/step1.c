// Paiza 問題集 配列メニュー i番目の出力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_i-thoutput_step1
#include <stdio.h>
#define H 4
#define W 4

int main()
{
    int a[H][W] = {
        {1, 2, 3, 4},
        {10, 100, 0, 5},
        {8, 1, 3, 8},
        {15, 34, 94, 25}
    };
    int k, l;

    scanf("%d %d", &k, &l);
    printf("%d\n", a[k - 1][l - 1]);
    return 0;
}