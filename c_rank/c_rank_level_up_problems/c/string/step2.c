// Paiza 問題集 Cランクレベルアップメニュー 部分文字列 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_string_step2
#include <stdio.h>

int main()
{
    char a;
    char s[11];

    scanf("%c", &a);
    scanf("%10s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == a) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}