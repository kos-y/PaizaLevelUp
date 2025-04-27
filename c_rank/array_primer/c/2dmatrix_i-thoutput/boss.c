// Paiza 問題集 配列メニュー 【二次元配列の入出力】i番目の出力 Boss C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_i-thoutput_boss
#include <stdio.h>

int main()
{
    int n, m, k, l;
    
    scanf("%d %d %d %d", &n, &m, &k, &l);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;

            scanf("%d", &a);
            if (i == k - 1 && j == l - 1) {
                printf("%d\n", a);
            }
        }
    }

    return 0;
}