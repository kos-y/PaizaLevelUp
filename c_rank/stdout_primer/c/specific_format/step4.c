// Paiza 問題集 標準出力メニュー ペアの数値の入った表を罫線入りで出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step4
#include <stdio.h>

#define DATA_WIDTH 6
#define SPLIT_WIDTH 3

int main()
{
    int h, w, a, b;
    scanf("%d %d %d %d", &h, &w, &a, &b);
    
    int l = (w * DATA_WIDTH) + ((w - 1) * SPLIT_WIDTH);
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("(%d, %d)", a, b);
            if (j < w - 1) {
                printf(" | ");
            }
        }
        
        printf("\n");
        if (i < h - 1) {
            for (int j = 0; j < l; j++) {
                printf("=");
            }
            printf("\n");
        }
    }
    
    return 0;
}