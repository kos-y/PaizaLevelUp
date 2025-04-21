// Paiza 問題集 N 組の整数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;

        scanf("%d %d", &a, &b);
        printf("%d %d\n", a, b);
    }

    return 0;
}