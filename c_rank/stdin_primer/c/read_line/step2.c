// Paiza 問題集 標準出力メニュー 2 行の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step2
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