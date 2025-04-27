// Paiza 問題集 配列メニュー 要素数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step1
#include <stdio.h>
#define ELE_NUM_2D(x) sizeof(x) / sizeof(x[0][0])

int main()
{
    int n[2][6] = {
        {1, 2, 3, 4, 5, 6},
        {8, 1, 3, 3, 1, 8}
    };

    printf("%lu\n", ELE_NUM_2D(n));
}