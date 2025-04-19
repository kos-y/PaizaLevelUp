// Paiza 問題集 標準入力メニュー 半角スペース区切りの 10 個の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_input_step4
#include <stdio.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 10; i++) {
        char s[10];

        scanf("%10s", s);
        printf("%s\n", s);
    }

    return 0;
}