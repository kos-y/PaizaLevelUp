// Paiza 問題集 ループメニュー1 1 はどこにある？ C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__seq_one
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        int a;

        scanf("%d ", &a);
        if (a == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}