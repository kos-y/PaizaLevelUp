// Paiza 問題集 配列メニュー 全要素の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step2
#include <stdio.h>
#include <string.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int n[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    for (int i = 0; i < NUM_ELE(n); i++) {
        printf("%d\n", n[i]);
    }

    return 0;
}