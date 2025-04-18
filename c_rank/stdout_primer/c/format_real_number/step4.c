// Paiza 問題集 標準出力 1 つの実数を出力 4 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_step4
#include <stdio.h>

int main()
{
    double n;
    int m;
    char f[6];

    scanf("%lf %d", &n, &m);
    sprintf(f, "%%.%dlf", m);
    printf(f, n);
    return 0;
}