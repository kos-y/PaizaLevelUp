// Paiza 問題集 配列メニュー 行数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step3
#include <stdio.h>
#define H 3
#define W 3
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int n[H][W] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 7, 9}
    };

    printf("%lu\n", NUM_ELE(n));
    return 0;
}
