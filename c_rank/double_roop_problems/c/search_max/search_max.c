// Paiza 問題集 二重ループメニュー 二次元配列の最大の要素 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__search_max
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k, m = INT_MIN;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int a;

            scanf("%d", &a);
            if (m < a) {
                m = a;
            }
        }
    }

   printf("%d\n", m);
    return 0;
}