// Paiza 問題集 配列メニュー i 番目の出力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_i-thinput_step1
#include <stdio.h>

int main()
{
    char* s[] = {"good", "morning", "paiza", "813", "pa13"};
    int n;

    scanf("%d ", &n);
    printf("%s\n", s[n - 1]);
    return 0;
}