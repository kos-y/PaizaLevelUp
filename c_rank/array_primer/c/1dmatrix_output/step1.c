// Paiza 問題集 配列メニュー 要素数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step1
#include <stdio.h>
#include <string.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int n[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    printf("%lu\n", NUM_ELE(n));
    return 0;
}