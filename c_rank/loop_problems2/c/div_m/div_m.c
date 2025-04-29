// Paiza 問題集 ループメニュー1 任意の数で何回割れる? C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__div_m
#include <stdio.h>

int main()
{
    int n, m, c = 0;
    
    scanf("%d %d", &n, &m);
    while (n % m == 0) {
        n /= m;
        c++;
    }

    printf("%d\n", c);
    return 0;
}