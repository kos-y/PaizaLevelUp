// Paiza 問題集 論理演算メニュー 全加算器 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step9
#include <stdio.h>

void add_half(int a, int b, int* c, int* s);

int main()
{
    int a, b, c1, cx, sy, cy, s;

    scanf("%d %d %d", &a, &b, &c1);
    add_half(a, b, &cx, &sy);
    add_half(sy, c1, &cy, &s);
    printf("%d %d\n", cx ^ cy, s);
    return 0;
}

void add_half(int a, int b, int* c, int* s)
{
    *c = a & b;
    *s = a ^ b;
}