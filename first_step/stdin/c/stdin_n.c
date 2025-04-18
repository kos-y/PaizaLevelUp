// Paiza 問題集 標準入力サンプル問題セット N個のデータの入力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdin/stdin_n
#include <stdio.h>
#include <string.h>

#define LEN 100

int main()
{
    int n;
    scanf("%d ", &n);

    char format[6];
    sprintf(format, "%%%ds", LEN);
    for (int i = 0; i < n; i++) {
        char s[LEN + 1];
        scanf(format, s);
        printf("%s\n", s);
    }

    return 0;
}