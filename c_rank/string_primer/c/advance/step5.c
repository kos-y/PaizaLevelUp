// Paiza 問題集 文字列処理メニュー 重複の削除 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000

void strdistinct(char* s, char* d, size_t);

int main()
{
    char s[LEN + 2], d[LEN + 2];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strdistinct(s, d, LEN + 2);
    printf("%s\n", d);
    return 0;
}

void strdistinct(char* s, char* d, size_t n)
{
    memset(d, '\0', n);
    for (int i = 0, j = 0; s[i] != '\0'; i++) {
        if (strchr(d, s[i]) == NULL) {
            d[j++] = s[i];
        }
    }
}