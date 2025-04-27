// Paiza 問題集 配列メニュー i番目の出力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_i-thoutput_step2
#include <stdio.h>
#define H 3
#define W 3

int main()
{
    int a[H][W], k, l;

    scanf("%d %d", &k, &l);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", a[k - 1][l - 1]);
    return 0;
}