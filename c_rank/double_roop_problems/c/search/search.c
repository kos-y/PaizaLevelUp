// Paiza 問題集 二重ループメニュー 二次元配列での要素の検索 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__search
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, k;
    bool find = false;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int a;

            scanf("%d", &a);
            if (!find && a == 1) {
                printf("%d %d\n", i + 1, j + 1);
                find = true;
            }
        }
    }

    return 0;
}