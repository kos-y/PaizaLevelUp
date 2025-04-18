// Paiza 問題集 Dランクレベルアップメニュー 占い C編
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[4];
    if (n == 7) {
        strcpy(a, "Yes");
    } else {
        strcpy(a, "No");
    }

    printf("%s\n", a);
    return 0;
}