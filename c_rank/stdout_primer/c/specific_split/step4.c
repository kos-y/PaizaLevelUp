// Paiza 問題集 標準出力メニュー カンマ区切りで 10 個出力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step4
#include <stdio.h>

#define N 10

int main()
{
    int n[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
        printf("%d", n[i]);
        if (i < N - 1) {
            printf(",");
        }
    }

    printf("\n");
    return 0;
}