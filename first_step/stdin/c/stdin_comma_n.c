// Paiza 問題集 標準入力サンプル問題セット カンマ区切りのN個のデータの入力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdin/stdin_comma_n
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

int main()
{
    int n;
    scanf("%d ", &n);

    char* s = (char*)calloc((LEN * n) + n + 1, sizeof(char));
    scanf("%s", s);

    char* t = strtok(s, ",");
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, ",");
    }

    free(s);
    return 0;
}