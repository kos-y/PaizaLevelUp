// Paiza 問題集 論理演算メニュー NAND 演算の基本 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step5
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", (~(a & b)) & 0x1);
    return 0;
}