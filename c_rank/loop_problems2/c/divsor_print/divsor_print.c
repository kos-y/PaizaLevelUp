// Paiza 問題集 ループメニュー2 約数の列挙 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__divsor_print
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}