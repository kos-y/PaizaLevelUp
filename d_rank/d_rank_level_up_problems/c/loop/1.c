// Paiza 問題集 Dランクレベルアップメニュー ある数字までの出力 2 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__loop_1
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}