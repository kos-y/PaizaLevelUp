// Paiza 問題集 配列メニュー ある数以上以下の要素の列挙 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_ave_step1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a >= 5) {
            printf("%d\n", a);
        }
    }

    return 0;
}