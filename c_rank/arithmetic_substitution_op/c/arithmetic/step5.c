// Paiza 問題集 算術・代入演算メニュー 累乗 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step5
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 202, b = 134, c = 107;

    printf("%d\n", (int)pow((a + b) * c, 2));
    return 0;
}