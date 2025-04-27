// Paiza 問題集 算術・代入演算メニュー 掛け算 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step4
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d\n", &a, &b, &c);
    printf("%d %d\n", a * a, b * b + c * c);
    return 0;
}