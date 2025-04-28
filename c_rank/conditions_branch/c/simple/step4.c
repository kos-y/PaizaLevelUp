// Paiza 問題集 条件分岐メニュー ゼロ以外 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step4
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%s\n", n != 0 ? "YES" : "NO");
    return 0;
}