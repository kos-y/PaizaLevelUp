// Paiza 問題集 配列メニュー i番目の出力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_step1
#include <stdio.h>
#include <string.h>

int main()
{
    int a[] = {1, 3, 5, 4, 6, 2, 1, 7, 1, 5}, k;

    scanf("%d", &k);
    printf("%d\n", a[k - 1]);
    return 0;
}