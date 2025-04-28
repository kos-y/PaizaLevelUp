// Paiza 問題集 条件分岐メニュー 単純な条件分岐 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step1
#include <stdio.h>
#include <string.h>

int main()
{
    char s[21];

    scanf("%s", s);
    printf("%s\n", strcmp(s, "paiza") == 0 ? "YES" : "NO");
    return 0;
}