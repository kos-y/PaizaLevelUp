// Paiza 問題集 ループメニュー1 数列同士の引き算 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_sub
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = 0; i < n; i++) {
        int b;

        scanf("%d", &b);
        printf("%d\n", pa[i] - b);
    }

    free(pa);
    return 0;
}