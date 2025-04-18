// Paiza 問題集 Dランク・スキルチェック過去問題セット Eメールアドレス C編
#include <stdio.h>

#define LEN 64

int main()
{
    char s[LEN + 1], t[LEN + 1];
    char format[5];

    sprintf(format, "%%%ds", LEN);
    scanf(format, s);
    scanf(format, t);

    printf("%s@%s\n", s, t);
    return 0;
}