// Paiza 問題集 ループメニュー1 約数の個数 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__divsor_count
#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}