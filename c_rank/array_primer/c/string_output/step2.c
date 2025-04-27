// Paiza 問題集 配列メニュー 全要素の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_output_step2
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "good", "morning", "paiza", "813", "pa13" };

    for (int i = 0; i < NUM_ELE(sz); i++) {
        printf("%s\n", sz[i]);
    }    
    
    return 0;
}