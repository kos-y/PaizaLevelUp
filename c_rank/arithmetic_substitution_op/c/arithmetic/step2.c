// Paiza 問題集 算術・代入演算メニュー 引き算・掛け算 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step2
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d %d\n", a - b, a * b);
    return 0;
}