// Paiza 問題集 Cランクレベルアップメニュー 3の倍数のカウント C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_for_step1
#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d ", &a);
        if (a % 3 == 0) {
            c++;
        }
    }
    
    printf("%d\n", c);    
    return 0;
}