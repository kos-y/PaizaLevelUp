// Paiza 問題集 配列活用メニュー 配列の最小値 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__min
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a < min) {
            min = a;
        }
    }

    printf("%d\n", min);
    return 0;
}