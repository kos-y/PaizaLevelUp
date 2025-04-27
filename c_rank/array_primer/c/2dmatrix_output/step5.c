// Paiza 問題集 配列メニュー 各行の要素数の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step5
#include <stdio.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

struct V {
    int* v;
    size_t s;
};

int main()
{
    int v1[] = {1}, v2[] = {2, 3}, v3[] = {4, 5, 6};
    struct V v[] = {
        { v1, NUM_ELE(v1) },
        { v2, NUM_ELE(v2) },
        { v3, NUM_ELE(v3) }
    };

    for (int i = 0; i < NUM_ELE(v); i++) {
        printf("%lu\n", v[i].s);
    }

    return 0;
}