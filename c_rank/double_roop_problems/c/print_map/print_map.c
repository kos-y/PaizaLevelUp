// Paiza 問題集 二重ループメニュー 二次元配列の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__print_map
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int a;

            scanf("%d", &a);
            printf("%d", a);
            if (j < k - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}