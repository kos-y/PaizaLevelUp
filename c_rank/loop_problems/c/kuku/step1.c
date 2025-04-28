// Paiza 問題集 ループメニュー1 九九の表示 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__kuku_step1
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++) {
        printf("%d", i * 8);
        if (i < 9) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}