// Paiza 問題集 Cランク・スキルチェック過去問題セット 「単語のカウント」を解くために:part1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/word-count_01
#include <stdio.h>
#include <string.h>

#define N 1000

int main()
{
    char s[N + 2];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " " );
    }
    
    return 0;
}