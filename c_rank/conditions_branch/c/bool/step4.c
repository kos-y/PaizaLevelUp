// Paiza 問題集 条件分岐メニュー NOT C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__bool_step4
#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);
    printf("%s\n", !(x >= 10) ? "YES" : "NO");
    return 0;
}