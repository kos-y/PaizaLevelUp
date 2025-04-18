// Paiza 問題集 標準出力メニュー バーティカルライン区切りで 3 つの文字列を出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step2
#include <stdio.h>

#define N 3
#define LEN 10
#define F_LEN 4

int main()
{
    char f[F_LEN + 1];
    char s[N][LEN + 1];

    sprintf(f, "%%%ds", LEN);
    for (int i = 0; i < N; i++) {
        scanf(f, s[i]);

        printf("%s", s[i]);
        if (i < N - 1) {
            printf("|");
        }
    }

    printf("\n");
    return 0;
}