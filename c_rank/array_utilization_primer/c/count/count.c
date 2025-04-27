// Paiza 問題集 配列活用メニュー 指定の要素のカウント C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__count
#include <stdio.h>

int main()
{
    int n, k, c = 0;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == k) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}