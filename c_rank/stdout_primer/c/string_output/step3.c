// Paiza 問題集 入力された 2 つの文字列を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__string_output_step3
#include <stdio.h>

#define LEN 10

int main()
{
    char s[LEN + 1], t[LEN + 1];
    char format[5];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);
    scanf(format, t);

    printf("%s\n", s);
    printf("%s\n", t);
    return 0;
}