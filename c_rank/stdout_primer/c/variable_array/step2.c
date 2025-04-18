// Paiza 問題集 標準出力 数値を異なる長さで 2 行出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step2
#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    loop(1, n);
    loop(1, m);
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