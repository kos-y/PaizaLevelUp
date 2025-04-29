// Paiza 問題集 ループメニュー1 階乗の計算 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__factorial
#include <stdio.h>

int main()
{
    int n, s = 1;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        s *= i;
    }

    printf("%d\n", s);
    return 0;
}