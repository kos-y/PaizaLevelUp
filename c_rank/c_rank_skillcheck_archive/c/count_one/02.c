// Paiza 問題集 Cランク・スキルチェック過去問題セット 「1を数えよ」を解くために:part2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/count_one_02
#include <stdio.h>

int main()
{
    char s[17];
    int c = 0;

    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}