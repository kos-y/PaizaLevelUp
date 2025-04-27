// Paiza 問題集 文字列処理メニュー 文字列から数値への変換 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%d\n", atoi(s) - 813);
    return 0;
}
