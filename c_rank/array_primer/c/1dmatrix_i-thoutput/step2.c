// Paiza 問題集 配列メニュー i番目の出力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_step2
#include <stdio.h>
#define N 10

int main()
{
    int k, a[N];

    scanf("%d", &k);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", a[k - 1]);
    return 0;
}