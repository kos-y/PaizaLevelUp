// Paiza 問題集 標準出力 【実数をフォーマット指定して出力】複数の実数を出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_boss
#include <stdio.h>

int main()
{
    int q;

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        double n;
        int m;
        char format[8];

        scanf("%lf %1d", &n, &m);

        sprintf(format, "%%.%dlf\n", m);
        printf(format, n);
    }

    return 0;
}