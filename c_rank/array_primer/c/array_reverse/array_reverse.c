// Paiza 問題集 配列メニュー 配列の反転 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_reverse
#include <stdio.h>
#include <stdlib.h>

void input(int* p, int c);
void reverse(int* p, int c);
void swap(int* pa, int* pb);
void output(int* p, int c);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    input(a, n);
    reverse(a, n);
    output(a, n);
    free(a);
    return 0;
}

void input(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        scanf("%d", &p[i]);
    }
}

void reverse(int *p, int c)
{
    for (int i = 0, j = c - 1; i < j; i++, j--) {
        swap(&p[i], &p[j]);
    }
}

void swap(int* pa, int* pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void output(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        printf("%d\n", p[i]);
    }
}