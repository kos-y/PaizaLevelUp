// Paiza 問題集 文字列処理メニュー 小文字から大文字への変換 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step7
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strtoupper(char* s);

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strtoupper(s);
    printf("%s\n", s);
    return 0;
}

void strtoupper(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}