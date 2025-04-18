// Paiza 問題集 標準出力 1 つの実数を出力 3 C編（paizaランク D 相当
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_step3
#include <stdio.h>

int main()
{
    double n;

    scanf("%lf", &n);
    printf("%.3lf\n", n);
    return 0;
}