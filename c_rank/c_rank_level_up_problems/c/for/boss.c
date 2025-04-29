// Paiza 問題集 Cランクレベルアップメニュー forループ C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_for_boss
#include <stdio.h>

int main()
{
    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        int c = 0;

        for (int j = 0; j < m; j++) {
            int a;

            scanf("%d", &a);
            if (a == k) {
                c++;
            }
        }

        printf("%d\n", c);
    }

    return 0;
}