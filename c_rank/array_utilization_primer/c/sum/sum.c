// Paiza 問題集 配列活用メニュー 全ての要素の和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__sum
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        sum += a;
    }

    printf("%d\n", sum);
    return 0;
}