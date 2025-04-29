// Paiza 問題集 Cランク・スキルチェック過去問題セット 「単語のカウント」を解くために:part2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/word-count_02
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char n[1002];

    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = '\0';

    char* p = strtok(n, " ");
    while (p != NULL) {
        if (strcmp(p, "red") == 0) {
            printf("Yes\n");
            return 0;
        }

        p = strtok(NULL, " ");
    }

    printf("No\n");
    return 0;
}
