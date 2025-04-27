// Paiza 問題集 論理演算メニュー 論理演算を用いた計算のまとめ C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_boss
#include <stdio.h>

int not(int x);

int main()
{
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", not((not(a) & not(b)) | not(c)) ^ d);
    return 0;
}

int not(int x)
{
    return (~x) & 0x1;
}