// Paiza 問題集 条件分岐メニュー 0 が含まれていないか判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_boss
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool f = false;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == 0) {
            f = true;
        }
    }

    printf("%s\n", !f ? "YES" : "NO");
    return 0;
}