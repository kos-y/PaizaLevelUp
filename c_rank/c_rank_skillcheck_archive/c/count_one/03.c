// Paiza 問題集 Cランク・スキルチェック過去問題セット 「1を数えよ」を解くために:part3 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/count_one_03
#include <stdio.h>

int main()
{
    int n, c = 0;

    scanf("%d", &n);
    while (n > 0) {
        c += n % 2;
        n /= 2;
    }

    printf("%d\n", c);
    return 0;
}