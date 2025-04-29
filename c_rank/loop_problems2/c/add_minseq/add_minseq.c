// Paiza 問題集 ループメニュー1 加算された数列の最小値 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__add_minseq
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = INT_MAX;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        int a;

        scanf("%d ", &a);
        if (m > a + i) {
            m = a + i;
        }
    }
    
    printf("%d\n", m);    
    return 0;
}