// Paiza 問題集 Dランクレベルアップメニュー 数値の分岐 C編
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[4];
    if (n <= 100) {
        strcpy(a, "YES");
    } else {
        strcpy(a, "NO");
    }

    printf("%s\n", a);
    return 0;
}