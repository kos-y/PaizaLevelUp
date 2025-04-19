// Paiza 問題集 標準入力メニュー 【半角スペース区切りの入力】半角スペース区切りの 1,000 個の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_input_boss
#include <stdio.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 1000; i++) {
        char s[10];

        scanf("%10s", s);
        printf("%s\n", s);
    }

    return 0;
}