// Paiza 問題集 ループメニュー1 数字の受け取り 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__input_num_step1
#include <stdio.h>
#define N 10

int main()
{
    for (int i = 0; i < N; i++) {
        int k;

        scanf("%d", &k);
        printf("%d\n", k);
    }

    return 0;
}