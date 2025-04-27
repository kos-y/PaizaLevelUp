// Paiza 問題集 配列メニュー 何個ある? 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_count_step1
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int count(int* a, int n, size_t sz);

int main()
{
    int a[] = {1, 2, 2, 1, 2, 1, 2, 1, 1, 1};

    printf("%d\n", count(a, 1, NUM_ELE(a)));
    return 0;
}

int count(int* a, int n, size_t sz)
{
    int c = 0;

    for (int i = 0; i < sz; i++) {
        if (a[i] == n) {
            c++;
        }
    }

    return c;
}