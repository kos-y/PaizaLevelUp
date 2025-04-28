// Paiza 問題集 条件分岐メニュー 曜日の判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__mod_step4
#include <stdio.h>

int main()
{
    const char* w[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int x;

    scanf("%d", &x);
    printf("%s\n", w[(x - 1) % 7]);
    return 0;
}