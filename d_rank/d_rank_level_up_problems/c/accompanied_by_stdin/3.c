// Paiza 問題集 Dランクレベルアップメニュー 代入演算 2 C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__accompanied_by_stdin_3
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int n = 0;
    n += a;
    n *= b;
    n %= c;
    printf("%d\n", n);
    return 0;
}