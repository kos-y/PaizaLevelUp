// Paiza 問題集 配列メニュー 何番目にある? 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_i-th_step1
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int indexof(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};

    printf("%d\n", indexof(a, 8, NUM_ELE(a)) + 1);
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