// Paiza 問題集 配列メニュー i 行目 j 列目の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step6
#include <stdio.h>
#define H 3
#define W 3

int main()
{
    int v[H][W] = {
        {1, 2, 3},
        {8, 1, 3},
        {10, 100, 1}
    };

    printf("%d\n", v[1][2]);
    return 0;
}