// Paiza 問題集 文字列処理メニュー 文字列の条件判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step4
#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%s\n", strcmp(s, "paiza") == 0 ? "YES" : "NO");
    return 0;
}