// Paiza 問題集 Dランクレベルアップメニュー 入力された 引き算・掛け算 C編
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int d = a - b;
    int p = a * b;
    
    printf("%d %d\n", d, p);
    return 0;
}