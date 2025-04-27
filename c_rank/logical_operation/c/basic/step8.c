// Paiza 問題集 論理演算メニュー 半加算器 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step8
#include <stdio.h>

void add_half(int a, int b, int* c, int* s);

int main()
{
    int a, b, c, s;
    
    scanf("%d %d", &a, &b);
    add_half(a, b, &c, &s);
    printf("%d %d\n", c, s);
    return 0;
}

void add_half(int a, int b, int* c, int* s)
{
    *c = a & b;
    *s = a ^ b;
}
