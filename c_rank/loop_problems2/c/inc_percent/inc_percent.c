// Paiza 問題集 ループメニュー1 毎日増加するお金 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__inc_percent
#include <stdio.h>

int main()
{
    int a, b, i;
    
    scanf("%d %d", &a, &b);
    for (i = 0; a <= b; i++) {
        a += (int)(a * 0.1);
    }
    
    printf("%d\n", i);
    return 0;
}