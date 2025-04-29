// Paiza 問題集 条件式メニュー NOT 演算子 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_expression/conditions_expression__logical_operator_step3
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", !(a == b));
    return 0;
}