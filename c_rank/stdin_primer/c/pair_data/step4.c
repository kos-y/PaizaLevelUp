// Paiza 問題集 文字列と整数の組の入力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_step4
#include <stdio.h>

#define LEN 10

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[LEN + 1];
        int a;

        scanf("%s %d", s, &a);
        printf("%s %d\n", s, a);
    }

    return 0;
}