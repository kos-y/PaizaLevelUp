// Paiza 問題集 条件分岐メニュー AND+OR C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__bool_boss
#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);
    printf("%s\n", (x >= 10 && y >= 10) || z >= 10 ? "YES" : "NO");
    return 0;
}