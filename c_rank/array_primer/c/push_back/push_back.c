// Paiza 問題集 配列メニュー 配列末尾への追加 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__push_back
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
    }

    printf("%d\n", m);
    return 0;
}