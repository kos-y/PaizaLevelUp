// Paiza 問題集 文字列処理メニュー 文字列の検索 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step9
#include <stdio.h>
#include <string.h>

#define LEN 100

int main()
{
    char s[LEN + 2], t[LEN + 2];
    
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    printf("%s\n", strstr(s, t) != NULL ? "YES" : "NO");
    return 0;
}