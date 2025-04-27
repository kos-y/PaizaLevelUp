// Paiza 問題集 配列メニュー 二点間の距離 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_distance_step1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int x, y;

        scanf("%d  %d ", &x, &y);
        printf("%d\n", abs(2 - x) + abs(3 - y));
    }
    
    return 0;
}