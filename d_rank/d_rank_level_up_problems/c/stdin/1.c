// Paiza 問題集 Dランクレベルアップメニュー 1 行の入力 C編
#include <stdio.h>

#define LEN 10

int main()
{
    char s[LEN + 1];
    char format[5];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);

    printf("%s\n", s);
    return 0;
}