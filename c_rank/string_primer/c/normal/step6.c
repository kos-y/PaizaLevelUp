// Paiza 問題集 文字列処理メニュー 大文字から小文字への変換 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step6
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strtolower(char* s);

int main()
{
    char s[10002];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strtolower(s);
    printf("%s\n", s);
    return 0;
}

void strtolower(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}