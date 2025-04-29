// Paiza 問題集 Cランク・スキルチェック過去問題セット 「野球の審判」を解くために:part6 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/umpire_07
#include <stdio.h>
#include <string.h>

int main()
{
    int n, strike = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[7];

        scanf("%6s", s);
        if (strcmp(s, "strike") == 0) {
            printf("%s!\n", ++strike < 3 ? "strike" : "out");
        } else {
            printf("%s\n", s);
        }
    }

    return 0;
}