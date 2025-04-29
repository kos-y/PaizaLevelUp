// Paiza 問題集 条件式メニュー 論理演算子の組み合わせ C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/conditions_expression/conditions_expression__logical_operator_step5
#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", a == b && b == c && c == d);
    return 0;
}