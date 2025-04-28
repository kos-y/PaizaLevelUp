// Paiza 問題集 条件分岐メニュー 数値の分岐 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%s\n", n <= 100 ? "YES" : "NO");
    return 0;
}