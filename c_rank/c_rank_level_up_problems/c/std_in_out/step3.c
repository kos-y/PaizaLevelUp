// Paiza 問題集 Cランクレベルアップメニュー 複数行にわたる入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_std_in_out_step3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    return 0;
}