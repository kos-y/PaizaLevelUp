// Paiza 問題集 算術・代入演算メニュー 代入演算 4 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__substitution_step4
#include <stdio.h>

int main()
{
    int a, b, n = 10000;

    scanf("%d %d", &a, &b);
    n /= a;
    n %= b;
    printf("%d\n", n);
    return 0;
}