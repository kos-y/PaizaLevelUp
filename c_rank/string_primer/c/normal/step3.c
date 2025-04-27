// Paiza 問題集 文字列処理メニュー 文字列の書き換え C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step3
#include <stdio.h>
#include <string.h>

int main()
{
    char s[102], c;
    int i;
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%d %c", &i, &c);
    s[i - 1] = c;
    printf("%s\n", s);
    return 0;
}