// Paiza 問題集 二重ループメニュー 指定された範囲・行数の数字の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__print_range
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
            if (j < n) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}