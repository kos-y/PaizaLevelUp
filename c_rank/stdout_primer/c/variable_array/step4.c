// Paiza 問題集 標準出力 すべての行の長さが不定な 2 次元配列の出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step4
#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int m;

        scanf("%d", &m);
        loop(1, m);
    }

    return 0;
}

void loop(int s, int e)
{
    for (int i = s; i <= e; i++) {
        printf("%d", i);
        if (i < e) {
            printf(" ");
        }
    }
    printf("\n");
}