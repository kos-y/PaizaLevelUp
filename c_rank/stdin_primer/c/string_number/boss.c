// Paiza 問題集 標準入力メニュー 【N個の文字列の入力】1 行目で与えられる N 個の文字列の入力 (large) C編（paizaランク D 相当）
#include <stdio.h>

#define LEN 10

int main()
{
    int n;
    char format[5];

    scanf("%d", &n);
    sprintf(format, "%%%ds", LEN);
    for (int i = 0; i < n; i++) {
        char s[LEN + 1];

        scanf(format, s);
        printf("%s\n", s);
    }

    return 0;
}