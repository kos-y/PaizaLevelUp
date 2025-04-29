// Paiza 問題集 Cランクレベルアップメニュー 条件を満たす最小の自然数 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_simulation_step1
#include <stdio.h>

int main()
{
    int i;

    for (i = 10000; i % 13 != 0; i++);
    printf("%d\n", i);
    return 0;
}