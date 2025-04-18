// Paiza 問題集 標準入力サンプル問題セット カンマ区切りの3つのデータの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin/stdin_comma_3
#include <stdio.h>
#include <string.h>

#define COUNT 3
#define LEN 100

int main()
{
    char s[(LEN * COUNT) + COUNT + 1];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char* t = strtok(s, ",");
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, ",");
    }

    return 0;
}