// Paiza 問題集 Cランク・スキルチェック過去問題セット 文字列の抽出 : part1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/extract_word_01
#include <stdio.h>

int main()
{
    char s[6001];

    scanf("%6000s", s);
    for (int i = 0; i < 2; i++) {
        printf("%s\n", s);
    }

    return 0;
}