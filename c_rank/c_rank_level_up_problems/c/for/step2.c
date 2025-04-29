// Paiza 問題集 Cランクレベルアップメニュー フラグ管理 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_for_step2
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool s = false;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == 7) {
            s = true;
        }
    }

    printf("%s\n", s ? "YES" : "NO");
    return 0;
}
