// Paiza 問題集 二重ループメニュー 二次元配列の行ごとの和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__row_sum
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < k; j++) {
            int a;

            scanf("%d", &a);
            sum += a;
        }

        printf("%d\n", sum);
    }

    return 0;
}