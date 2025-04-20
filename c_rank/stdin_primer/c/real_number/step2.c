// Paiza 問題集 改行区切りでの 2 行目で与えられる N 個の実数の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__real_number_step2
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