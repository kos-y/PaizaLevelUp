// Paiza 問題集 ループメニュー1 数字の受け取り 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__input_num_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int k;

        scanf("%d", &k);
        printf("%d\n", k);
    }

    return 0;
}