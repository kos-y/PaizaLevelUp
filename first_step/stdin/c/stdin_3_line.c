// Paiza 問題集 標準入力サンプル問題セット 3行のデータの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin/stdin_3_line
#include <stdio.h>
#include <string.h>

#define LEN 100
#define LINE 3

int main()
{
    for (int i = 0; i < LINE; i++) {
        char s[LEN + 2];

        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        printf("%s\n", s);
    }

    return 0;
}