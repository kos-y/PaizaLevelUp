// Paiza 問題集 条件式メニュー 文字列の比較 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_expression/conditions_expression__comparison_operator_boss
#include <stdio.h>
#include <string.h>

#define LEN 21

int main()
{
    char s[LEN], t[LEN];

    scanf("%s %s", s, t);
    printf("%d\n", strcmp(s, t) == 0);
    return 0;
}