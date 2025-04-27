// Paiza 問題集 文字列処理メニュー 日時データの変換その２ C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step3
#include <stdio.h>
#include <string.h>

int main()
{
    char s[19];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, "/ :");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, "/ :");
    }
    
    return 0;
}