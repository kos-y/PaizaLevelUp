// Paiza 問題集 入力された 1 行または 2 行の出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__n_line_step1
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}