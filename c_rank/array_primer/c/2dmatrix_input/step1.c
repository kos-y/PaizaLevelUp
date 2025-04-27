// Paiza 問題集 配列メニュー 二次元配列の入力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_input_step1
#include <stdio.h>
#define H 2
#define W 4

int main()
{
    int v[H][W] = {
        {1, 3, 5, 7},
        {8, 1, 3, 8}
    };

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            printf("%d", v[i][j]);
            if (j < W - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}