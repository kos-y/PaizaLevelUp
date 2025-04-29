// Paiza 問題集 ループメニュー1 2 で何回割れる？ C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__div_two
#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d ", &n);
    while (n % 2 == 0) {
        n /= 2;
        c++;
    }

    printf("%d\n", c);
    return 0;
}