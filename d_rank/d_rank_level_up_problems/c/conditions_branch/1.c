// Paiza 問題集 Dランクレベルアップメニュー 単純な条件分岐 C編
#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    scanf("%s", s);

    char a[4];
    if (strcmp(s, "paiza") == 0) {
        strcpy(a, "YES");
    } else {
        strcpy(a, "NO");
    }

    printf("%s\n", a);
    return 0;
}