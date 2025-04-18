// Paiza 問題集 標準入力サンプル問題セット 3つのデータの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin/stdin_3
#include <stdio.h>

#define LEN 100

int main()
{
    char format[6];
    sprintf(format, "%%%ds", LEN);

    for (int i = 0; i < 3; i++) {
        char s[LEN + 1];
        scanf(format, s);

        printf("%s\n", s);
    }

    return 0;
}