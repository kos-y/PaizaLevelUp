// Paiza 問題集 Cランクレベルアップメニュー 標準入出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_std_in_out_boss
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char s[11];
        int a;
        
        scanf("%s %d ", s, &a);
        printf("%s %d\n", s, a + 1);
    }
    
    return 0;
}
