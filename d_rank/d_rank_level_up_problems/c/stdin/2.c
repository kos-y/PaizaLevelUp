// Paiza 問題集 Dランクレベルアップメニュー 1 行の入力 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__stdin_2
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