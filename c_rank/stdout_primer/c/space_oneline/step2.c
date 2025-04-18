// Paiza 問題集 標準出力メニュー 3 つの数値を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_step2
#include <stdio.h>

#define NUM_ELE(x) (sizeof(x) / sizeof(x[0]))

int main()
{
    int vs[] = {8, 1, 3};

    size_t s = NUM_ELE(vs);
    for (int i = 0; i < s; i++) {
        printf("%d", vs[i]);
        if (i < s - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}