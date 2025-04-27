// Paiza 問題集 配列メニュー 要素の挿入 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__elm_insert
#include <stdio.h>

int main()
{
    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (i == m - 1) {
            printf("%d\n", k);
        }

        printf("%d\n", a);
    }

    return 0;
}