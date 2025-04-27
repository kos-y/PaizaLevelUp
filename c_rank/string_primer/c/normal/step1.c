// Paiza 問題集 文字列処理メニュー 部分文字列 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step1
#include <stdio.h>

int main()
{
    char s[10002];
    int i, j;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%d %d", &i, &j);
    for (i--, j--; i <= j; i++) {
        printf("%c", s[i]);
    }
    
    printf("\n");
    return 0;
}