// Paiza 問題集 標準出力メニュー 【半角スペース区切りの出力】1,000 個の数値を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_boss
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000; i++) {
        printf("%d", i);
        if (i < 1000) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
