// Paiza 問題集 配列メニュー 配列の連結 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_join
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    for (int i = 0; i < m; i++) {
        int b;

        scanf("%d", &b);
        printf("%d\n", b);
    }

    return 0;
}