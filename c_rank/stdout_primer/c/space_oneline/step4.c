// Paiza 問題集 標準出力メニュー 10 個の数値を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_step4
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++) {
        printf("%d", i);
        if (i < 10) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
