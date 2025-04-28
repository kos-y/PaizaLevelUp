// Paiza 問題集 配列活用メニュー 変数の入れ替え C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__excange
#include <stdio.h>

void swap(int* pa, int* pb);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

void swap(int* pa, int* pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
