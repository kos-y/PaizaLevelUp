// Paiza 問題集 標準出力 数値を半角スペース埋めで出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step1
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%3d\n", n);
    return 0;
}