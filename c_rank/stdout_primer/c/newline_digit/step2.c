// Paiza 問題集 標準出力メニュー 2 行の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__newline_digit_step2
#include <stdio.h>

#define NUM_ELE(x) (sizeof(x) / sizeof(x[0]))

int main()
{
    int vs[] = {8, 13};

    for (int i = 0; i < NUM_ELE(vs); i++) {
        printf("%d\n", vs[i]);
    }
    return 0;
}