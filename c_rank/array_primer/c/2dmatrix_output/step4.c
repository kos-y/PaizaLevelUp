// Paiza 問題集 配列メニュー 列数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step4
#include <stdio.h>
#define H 3
#define W 4
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int n[H][W] = {
        {1, 2, 3, 4},
        {6, 5, 4, 3},
        {3, 1, 8, 1}
    };

    printf("%lu\n", NUM_ELE(n[0]));
    return 0;
}