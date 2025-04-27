// Paiza 問題集 配列メニュー 何個ある? 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_count_step2
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int count(int* a, int n, size_t sz);

int main()
{
    int n;
    int a[] = {1, 2, 5, 1, 4, 3, 2, 5, 1, 4};

    scanf("%d", &n);
    printf("%d\n", count(a, n, NUM_ELE(a)));
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