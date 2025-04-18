// Paiza 問題集 Dランクレベルアップメニュー 数値演算結果で分岐 C編
#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    char x[4];
    if (a * b <= c) {
        strcpy(x, "YES");
    } else {
        strcpy(x, "NO");
    }

    printf("%s\n", x);
    return 0;
}