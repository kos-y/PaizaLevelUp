// Paiza 問題集 文字列処理メニュー 数値判定 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step4
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isstrdigit(char* s);

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%s\n", isstrdigit(s) ? "YES" : "NO");
    return 0;
}

bool isstrdigit(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }

    return true;
}