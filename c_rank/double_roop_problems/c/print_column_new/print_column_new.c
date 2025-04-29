// Paiza 問題集 二重ループメニュー 指定された数字までの出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__print_column_new
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}