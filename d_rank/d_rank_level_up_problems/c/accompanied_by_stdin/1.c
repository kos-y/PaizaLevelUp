// Paiza 問題集 Dランクレベルアップメニュー 入力された 2 つの文字列を出力 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__accompanied_by_stdin_1
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
