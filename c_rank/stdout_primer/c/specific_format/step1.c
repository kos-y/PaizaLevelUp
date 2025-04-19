// Paiza 問題集 標準出力メニュー 2 つの文字列を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step1
#include <stdio.h>

#define LEN 100

int main()
{
    char s[LEN + 1], t[LEN + 1];
    char format[6];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);
    scanf(format, t);
    printf("%s + %s = %s%s\n", s, t, s, t);
    return 0;
}