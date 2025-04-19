// Paiza 問題集 標準出力メニュー 3 行の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step3
#include <stdio.h>

#define LEN 10

int main()
{
    char s[LEN + 1], t[LEN + 1], u[LEN + 1];
    char format[5];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);
    scanf(format, t);
    scanf(format, u);
    
    printf("%s\n", s);
    printf("%s\n", t);
    printf("%s\n", u);
    return 0;
}