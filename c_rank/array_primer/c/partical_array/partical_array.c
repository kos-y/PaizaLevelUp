// Paiza 問題集 配列メニュー 部分配列 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__partical_array
#include <stdio.h>

int main()
{
    int a, b, n;

    scanf("%d %d %d", &a, &b, &n);
    for (int i = 0; i < n; i++) {
        int v;

        scanf("%d", &v);
        if (a - 1 <= i && i < b) {
            printf("%d\n", v);
        }
    }

    return 0;
}