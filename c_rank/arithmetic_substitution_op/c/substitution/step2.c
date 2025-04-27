// Paiza 問題集 算術・代入演算メニュー 代入演算 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__substitution_step2
#include <stdio.h>

int main()
{
    int a, b, c, n = 0;

    scanf("%d %d %d", &a, &b, &c);
    n += a;
    n *= b;
    n %= c;
    printf("%d\n", n);
    return 0;
}