// Paiza 問題集 Cランクレベルアップメニュー 入力の配列による保持 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_std_in_out_step4
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = INT_MIN;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (m < a) {
            m = a;
        }
    }

    printf("%d\n", m);
    return 0;
}
