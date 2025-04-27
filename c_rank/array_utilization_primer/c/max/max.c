// Paiza 問題集 配列活用メニュー 配列の最大値 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__max
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, max = INT_MIN;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (max < a) {
            max = a;
        }
    }

    printf("%d\n", max);
    return 0;
}