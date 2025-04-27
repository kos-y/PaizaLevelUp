// Paiza 問題集 配列メニュー 何個ある? Boss C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_count_boss
#include <stdio.h>

int count(int* a, int n, size_t sz);

int main()
{
    int n, m, c = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int a;

        scanf("%d", &a);
        if (a == n) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}