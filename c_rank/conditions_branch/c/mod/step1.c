// Paiza 問題集 条件分岐メニュー 3 の倍数判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__mod_step1
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%s\n", n % 3 == 0 ? "YES" : "NO");
    return 0;
}