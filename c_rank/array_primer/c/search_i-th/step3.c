// Paiza 問題集 配列メニュー 何番目にある? 3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_i-th_step3
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    bool f = false;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int a;

        scanf("%d", &a);
        if (!f && a == n) {
            printf("%d\n", i + 1);
            f = true;
        }
    }

    return 0;
}
