// Paiza 問題集 標準出力メニュー N 個の文字を半分ずつ出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step1
#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n;

    scanf("%d", &n);
    loop(1, n / 2);
    loop((n / 2) + 1, n);
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