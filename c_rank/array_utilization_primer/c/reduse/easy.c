// Paiza 問題集 配列活用メニュー 九九表 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__reduse_easy
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d", i * j);
            if (j < 9) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}