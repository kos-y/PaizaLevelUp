// Paiza 問題集 標準入力メニュー 半角スペース区切りの 2 つの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_input_step2
#include <stdio.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 2; i++) {
        char s[11];

        scanf("%10s", s);
        printf("%s\n", s);
    }

    return 0;
}