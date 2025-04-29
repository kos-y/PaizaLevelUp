// Paiza 問題集 ループメニュー1 N が M ずつ増えたときにいつ K を越える？ C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__inc_m
#include <stdio.h>

int main()
{
    int n, m, k, i;
    
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; n <= k; i++) {
        n += m;
    }
    
    printf("%d\n", i);
    return 0;
}