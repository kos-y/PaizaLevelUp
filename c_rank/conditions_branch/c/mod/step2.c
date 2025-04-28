// Paiza 問題集 条件分岐メニュー 2 つの倍数判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__mod_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%s\n", n % 3 == 0 && n % 5 == 0 ? "YES" : "NO");
    return 0;
}