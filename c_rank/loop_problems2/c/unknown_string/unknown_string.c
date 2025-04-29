// Paiza 問題集 ループメニュー1 未知数個の文字列の受け取り C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__unknown_string
#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        char s[11];

        scanf("%10s", s);
        printf("%s\n", s);
        if (strcmp(s, "EOF") == 0) {
            break;
        }
    }

    return 0;
}