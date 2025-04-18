// Paiza 問題集 Dランクレベルアップメニュー 3 行の出力 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__stdout_4
#include <stdio.h>

#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int v[] = {8, 1, 3};
    
    for (int i = 0; i < NUM_ELE(v); i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}