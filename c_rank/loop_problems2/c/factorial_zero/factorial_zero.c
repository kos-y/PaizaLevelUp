// Paiza 問題集 ループメニュー1 階乗の末尾に 0 はいくつ付く？ C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__factorial_zero
#include <stdio.h>

int main()
{
    int n, s = 0, i;
    
    scanf("%d", &n);
    for (i = 5; i <= n; i *= 5) {
        s += n / i;
    }
    
    printf("%d\n", s);
    return 0;
}
