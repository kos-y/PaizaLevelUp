// Paiza 問題集 二重ループメニュー さまざまな長さの配列の和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__various_row_sum
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int k, sum = 0;

        scanf("%d", &k);
        for (int j = 0; j < k; j++) {
            int a;

            scanf("%d", &a);
            sum += a;
        }

        printf("%d\n", sum);
    }

    return 0;
}