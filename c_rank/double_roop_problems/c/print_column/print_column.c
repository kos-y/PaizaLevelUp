// Paiza 問題集 二重ループメニュー 指定された行数の数字の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__print_column
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d", j);
            if (j < 5) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}