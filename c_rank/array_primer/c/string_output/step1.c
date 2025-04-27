// Paiza 問題集 配列メニュー 要素数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_output_step1
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "Hello", "paiza", "1234", "pa13" };
    
    printf("%lu\n", NUM_ELE(sz));
    return 0;
}