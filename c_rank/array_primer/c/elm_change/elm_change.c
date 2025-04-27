// Paiza 問題集 配列メニュー 2 変数の入れ替え C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__elm_change
#include <stdio.h>

void swap(int* pa, int* pb);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void swap(int* pa, int* pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}