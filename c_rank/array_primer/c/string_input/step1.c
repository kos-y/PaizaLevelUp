// Paiza 問題集 配列メニュー 文字列の配列の入力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_input_step1
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    char* sz[] = { "eight", "one", "three", "paiza", "pa13", "813" };

    for (int i = 0; i < NUM_ELE(sz); i++) {
        printf("%s\n", sz[i]);
    }
    
    return 0;
}