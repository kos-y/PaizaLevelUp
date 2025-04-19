// Paiza 問題集 標準入力メニュー 半角スペース区切りの 3 つの入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_input_step3
#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++) {
        char s[11];

        scanf("%10s", s);
        printf("%s\n", s);
    }

    return 0;
}