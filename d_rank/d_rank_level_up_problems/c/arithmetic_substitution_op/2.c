// Paiza 問題集 Dランクレベルアップメニュー 割り算 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__arithmetic_substitution_op_2
#include <stdio.h>

int main()
{
    int a = 437326, b = 9085;

    int x = a / b;
    int y = a % b;

    printf("%d %d\n", x, y);
    return 0;
}