// Paiza 問題集 算術・代入演算メニュー 累乗 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step6
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (int)pow((a + b) * c, 2) % d);
    return 0;
}