// Paiza 問題集 文字列処理メニュー 文字列の受け取り C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step2
#include <stdio.h>

int main()
{
    char s[102];

    fgets(s, sizeof(s), stdin);
    printf(s);
    return 0;
}