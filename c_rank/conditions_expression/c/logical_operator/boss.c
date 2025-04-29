// Paiza 問題集 条件式メニュー 論理演算子の組み合わせ 3 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_expression/conditions_expression__logical_operator_boss
#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (a == b || c == d) && a == c);
    return 0;
}