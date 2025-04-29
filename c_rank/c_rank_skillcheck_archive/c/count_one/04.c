// Paiza 問題集 Cランク・スキルチェック過去問題セット 「1を数えよ」を解くために:part4 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/count_one_04
#include <stdio.h>

int main()
{
    unsigned short n;

    scanf("%u", &n);
    printf("%s\n", n & 0x1 == 0x1 ? "Yes" : "No");
    return 0;
}