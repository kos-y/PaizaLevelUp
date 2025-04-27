// Paiza 問題集 配列活用メニュー 指定要素の先頭位置 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__find
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, f = -1;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == k && f < 0) {
            f = i + 1;
        }
    }

    printf("%d\n", f);
    return 0;
}