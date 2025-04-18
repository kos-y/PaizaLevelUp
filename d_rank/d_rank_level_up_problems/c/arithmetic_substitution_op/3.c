// Paiza 問題集 Dランクレベルアップメニュー 累乗 C編
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 202, b = 134, c = 107;

    int n = (int)pow((a + b) * c, 2);

    printf("%d\n", n);
    return 0;
}