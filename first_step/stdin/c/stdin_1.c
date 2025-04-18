// Paiza 問題集 標準入力サンプル問題セット 1つのデータの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin/stdin_1
#include <stdio.h>
#define LEN 100

int main()
{
    char s[LEN + 1];
    char format[6];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);

    printf("%s\n", s);
    return 0;
}