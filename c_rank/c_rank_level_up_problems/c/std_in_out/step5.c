// Paiza 問題集 Cランクレベルアップメニュー 半角スペース区切りでの出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_std_in_out_step5
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("paiza");
        if (i < n) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}