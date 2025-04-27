// Paiza 問題集 データセット選択メニュー 最大値と最小値 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step3
#include <stdio.h>
#include <limits.h>
#define N 3

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < N; i++) {
        int n;

        scanf("%d", &n);
        if (n < min) {
            min = n;
        }

        if (max < n) {
            max = n;
        }
    }

    printf("%d\n", max - min);
    return 0;
}