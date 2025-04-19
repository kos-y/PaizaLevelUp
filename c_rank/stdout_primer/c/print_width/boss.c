// Paiza 問題集 標準出力メニュー 【出力幅を指定して出力】N 個の数値を M けた半角スペース埋めで出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_boss
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    char format[6];

    scanf("%d %2d", &n, &m);
    sprintf(format, "%%%dd\n", m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf(format, a);
    }

    return 0;
}