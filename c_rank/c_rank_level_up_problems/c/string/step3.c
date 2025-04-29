// Paiza 問題集 Cランクレベルアップメニュー 数字の文字列操作（基本） C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_string_step3
#include <stdio.h>

int todigit(char c);

int main()
{
    char s[5];
    
    scanf("%s", s);
    int a = (todigit(s[0])) + (todigit(s[3]));
    int b = (todigit(s[1])) + (todigit(s[2]));
    printf("%d%d\n", a, b);
    return 0;
}

int todigit(char c)
{
    return c - '0';
}