// Paiza 問題集 ループメニュー1 10 進数から M 進数に変換 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__conv_nbase
#include <stdio.h>

int main()
{
    int n, m, b = 0, k = 1;

    scanf("%d %d", &n, &m);
    while (n > 0) {
        b += (n % m) * k;
        n /= m;
        k *= 10;
    }
    
    printf("%d\n", b);
    return 0;
}