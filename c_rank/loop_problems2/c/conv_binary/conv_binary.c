// Paiza 問題集 ループメニュー1 10 進数から 2 進数に変換 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__conv_binary
#include <stdio.h>

int main()
{
    int n, b = 0, k = 1;

    scanf("%d", &n);
    while (n > 0) {
        b += (n % 2) * k;
        n /= 2;
        k *= 10;
    }
    
    printf("%d\n", b);
    return 0;
}
