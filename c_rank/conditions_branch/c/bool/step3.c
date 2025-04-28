// Paiza 問題集 条件分岐メニュー OR C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__bool_step3
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%s\n", a >= 10 || b >= 10 ? "YES" : "NO");
    return 0;
}