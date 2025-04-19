// Paiza 問題集 標準出力メニュー 10 行の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step4
#include <stdio.h>

#define N 10
#define LEN 10

int main()
{
    char format[5];

    sprintf(format, "%%%ds", LEN);
    for (int i = 0; i < N; i++) {
        char s[LEN + 1];

        scanf(format, s);
        printf("%s\n", s);
    }

    return 0;
}