// Paiza 問題集 条件分岐メニュー 偶奇の判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__mod_step3
#include <stdio.h>

int main()
{
    int n, c[2] = {0, 0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        c[a % 2]++;
    }
    printf("%d %d\n", c[0], c[1]);
    return 0;
}