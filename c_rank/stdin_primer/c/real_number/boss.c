// Paiza 問題集 1 行目で与えられる N 個の実数の入力 (large) C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__real_number_boss
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        double a;

        scanf("%lf", &a);
        printf("%lf\n", a);
    }

    return 0;
}