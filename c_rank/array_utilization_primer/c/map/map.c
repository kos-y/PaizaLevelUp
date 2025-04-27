// Paiza 問題集 配列活用メニュー 【配列を参照する操作】全ての要素に対する操作 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__map
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a + k);
    }

    return 0;
}