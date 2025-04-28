// Paiza 問題集 条件分岐メニュー 数値演算結果で分岐 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step3
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", a * b <= c ? "YES" : "NO");
    return 0;
}