// Paiza 問題集 データセット選択メニュー ランダムアクセス C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step1
#include <stdio.h>

int main()
{
    int n, m, a;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int t;

        scanf("%d", &t);
        if (i == m - 1) {
            a = t;
        }
    }

    printf("%d\n", a);
    return 0;
}