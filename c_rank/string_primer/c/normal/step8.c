// Paiza 問題集 文字列処理メニュー 大文字小文字の反転 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step8
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggle_upper_lower(char* s);

int main()
{
    char s[102];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    toggle_upper_lower(s);
    printf("%s\n", s);
    return 0;
}

void toggle_upper_lower(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
    }
}