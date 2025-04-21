// Paiza 問題集 整数の組からの選択 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_step3
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int a, b;

        scanf("%d %d", &a, &b);
        if (i == 8) {
            printf("%d %d\n", a, b);
        }
    }

    return 0;
}