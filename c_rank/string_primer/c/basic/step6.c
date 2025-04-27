// Paiza 問題集 文字列処理メニュー 文字の検索 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step6
#include <stdio.h>
#include <string.h>

int main()
{
    char s[10002], c[2];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%s", c);
    printf("%lu\n", strcspn(s, c) + 1);
    return 0;
}