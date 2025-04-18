// Paiza 問題集 Dランクレベルアップメニュー 半角スペース区切りの 2 つの入力 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__stdin_boss
#include <stdio.h>

#define LEN 10

int main()
{
    char s1[LEN + 1], s2[LEN + 1];
    char format[10];

    sprintf(format, "%%%ds %%%ds", LEN, LEN);
    scanf(format, s1, s2);

    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}