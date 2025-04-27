// Paiza 問題集 文字列処理メニュー 文字列の挿入 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step2
#include <stdio.h>
#include <string.h>

#define LEN 10000

int main()
{
    char s[LEN + 2], t[LEN + 2];
    int n, i;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%c", s[i]);
    }

    printf("%s", t);
    for (; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    
    printf("\n");
    return 0;
}