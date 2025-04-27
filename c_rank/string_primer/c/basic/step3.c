// Paiza 問題集 文字列処理メニュー 文字列の受け取り C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step3
#include <stdio.h>

int main()
{
    char s[102];
    int i;

    fgets(s, sizeof(s), stdin);
    scanf("%d", &i);
    printf("%c\n", s[i - 1]);
    return 0;
}