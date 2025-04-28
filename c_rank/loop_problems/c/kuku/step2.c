// Paiza 問題集 ループメニュー1 九九の表示 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__kuku_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= 9; i++) {
        printf("%d", i * n);
        if (i < 9) {
            printf(" ");
        }
    }

    return 0;
}