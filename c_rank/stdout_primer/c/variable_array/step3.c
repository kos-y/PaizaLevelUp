// Paiza 問題集 標準出力 直角三角形の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step3
#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        loop(1, i);
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