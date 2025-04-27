// Paiza 問題集 配列メニュー 何番目にある? 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_i-th_step2
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int indexof(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 5, 9, 7, 3, 2, 4, 8, 6, 10};
    int n;

    scanf("%d", &n);
    printf("%d\n", indexof(a, n, NUM_ELE(a)) + 1);
    return 0;
}

int indexof(int* a, int n, size_t sz)
{
    for (int i = 0; i < sz; i++) {
        if (a[i] == n) {
            return i;
        }
    }

    return -1;
}