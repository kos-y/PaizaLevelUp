// Paiza 問題集 入力された 【文字列の出力】入力された 10 個の文字列を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__string_output_boss
#include <stdio.h>
#include <string.h>

#define COUNT 10
#define LEN 1000

int main()
{
    char format[7];
    sprintf(format, "%%%ds", LEN);

    for (int i = 0; i < COUNT; i++) {
        char s[LEN + 1];
        scanf(format, s);
        printf("%s\n", s);
    }

    return 0;
}