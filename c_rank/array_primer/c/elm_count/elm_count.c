// Paiza 問題集 配列メニュー 要素のカウント C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__elm_count
#include <stdio.h>

int main()
{
    int n, m, c = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == m) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}