// Paiza 問題集 ループメニュー1 数列の和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_sum
#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        
        scanf("%d", &a);
        sum += a;
    }

    printf("%d\n", sum);
    return 0;
}