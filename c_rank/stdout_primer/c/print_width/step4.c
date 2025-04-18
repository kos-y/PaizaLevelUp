// Paiza 問題集 標準出力メニュー 数値を M けた半角スペース埋めで出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step4
#include <stdio.h>

int main()
{
    int n, m;
    char f[6];

    scanf("%d %2d", &n, &m);
    sprintf(f, "%%%dd\n", m);
    printf(f, n);
    return 0;
}