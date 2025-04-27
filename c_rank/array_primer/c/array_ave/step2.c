// Paiza 問題集 配列メニュー ある数以上以下の要素の列挙 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_ave_step2
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d ", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a >= k) {
            printf("%d\n", a);
        }
    }

    return 0;
}