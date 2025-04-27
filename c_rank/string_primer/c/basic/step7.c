// Paiza 問題集 文字列処理メニュー 文字列の連結 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step7
#include <stdio.h>
#include <string.h>

#define LEN 10000

int main()
{
    int n;
    scanf("%d ", &n);

    for (int i = 0; i < n; i++) {
        char s[LEN + 2];

        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';
        printf("%s", s);
    }

    printf("\n");
    return 0;
}