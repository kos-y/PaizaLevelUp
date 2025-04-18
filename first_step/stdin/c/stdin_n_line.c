// Paiza 問題集 標準入力サンプル問題セット N行のデータの入力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdin/stdin_n_line
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

int main()
{
    int n;
    scanf("%d ", &n);

    for (int i = 0; i < n; i++) {
        char s[LEN + 2];

        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        printf("%s\n", s);
    }

    return 0;
}