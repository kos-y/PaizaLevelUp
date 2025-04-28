// Paiza 問題集 条件分岐メニュー 大文字判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__bool_step2
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    scanf("%c", &c);
    printf("%s\n", isupper(c) ? "YES" : "NO");
    return 0;
}