// Paiza 問題集 文字列処理メニュー 文字列の文字数 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step5
#include <stdio.h>
#include <string.h>

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%lu\n", strlen(s));
    return 0;
}