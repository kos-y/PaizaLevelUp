// Paiza 問題集 標準出力メニュー 1 行の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step1
#include <stdio.h>
#include <string.h>

#define LEN 10

int main()
{
    char s[LEN + 2];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%s", s);
    return 0;
}