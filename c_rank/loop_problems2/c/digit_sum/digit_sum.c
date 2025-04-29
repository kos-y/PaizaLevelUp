// Paiza 問題集 ループメニュー1 各桁の和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__digit_sum
#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }

    printf("%d\n", sum);
    return 0;
}