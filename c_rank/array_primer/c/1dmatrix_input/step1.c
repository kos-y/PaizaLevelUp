// Paiza 問題集 配列メニュー 配列の入力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_input_step1
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int n[] = {8, 1, 3, 3, 8, 1, 1, 3, 8, 8};

    for (int i = 0; i < NUM_ELE(n); i++) {
        printf("%d\n", n[i]);
    }

    return 0;
}