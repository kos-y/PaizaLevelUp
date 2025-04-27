// Paiza 問題集 論理演算メニュー 否定( NOT )の基本 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step3
#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", (~a) & 0x1);
    return 0;
}