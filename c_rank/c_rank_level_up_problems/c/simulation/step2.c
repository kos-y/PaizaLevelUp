// Paiza 問題集 Cランクレベルアップメニュー シミュレーションの練習 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_simulation_step2
#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    
    int c = 0, p = 1, k = 1;
    while (k <= n) {
        k += p * a;
        p += k % b;
        c++;
    }
    
    printf("%d\n", c);
    return 0;
}