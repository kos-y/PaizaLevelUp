// Paiza 問題集 配列メニュー 配列の書き換え C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__elm_rewrite
#include <stdio.h>

int main()
{
    int a, b, n;

    scanf("%d %d %d", &a, &b, &n);
    for (int i = 0; i < n; i++) {
        int v;

        scanf("%d", &v);
        if (v == a) {
            v = b;
        }

        printf("%d\n", v);
    }

    return 0;
}