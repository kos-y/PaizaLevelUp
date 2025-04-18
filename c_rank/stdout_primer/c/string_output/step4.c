// Paiza 問題集 入力された 10 個の文字列を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__string_output_step4
#include <stdio.h>

#define COUNT 10
#define LEN 10

int main()
{
    char s[COUNT][LEN + 1];
    char format[5];

    sprintf(format, "%%%ds", LEN);
    for (int i = 0; i < COUNT; i++) {
        scanf(format, s[i]);

        printf("%s", s[i]);
        if (i < COUNT - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}