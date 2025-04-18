// Paiza 問題集 Dランクレベルアップメニュー 乗客人数 C編
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a - b + c;
    printf("%d\n", x);
    return 0;
}