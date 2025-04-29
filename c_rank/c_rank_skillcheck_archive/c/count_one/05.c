// Paiza 問題集 Cランク・スキルチェック過去問題セット 1を数えよ【ビット演算】 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/count_one_05
#include <stdio.h>

int main()
{
    unsigned short n;
    int c = 0;

    scanf("%hu", &n);
    while (n > 0) {
        c += n & 0x1;
        n >>= 1;
    }

    printf("%d\n", c);
    return 0;
}