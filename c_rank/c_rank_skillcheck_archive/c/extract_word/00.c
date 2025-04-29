// Paiza 問題集 Cランク・スキルチェック過去問題セット 文字列の抽出 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/extract_word_00
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char st[101], et[101], n[5001];

    scanf("%100s %100s", st, et);
    scanf("%5000s", n);

    char* ps = strstr(n, st);
    char* pe = strstr(n, et);
    *ps = *pe = ' ';
    while (ps != NULL && pe != NULL) {
        *ps = *pe = ' ';

        ps += strlen(st);
        if (ps < pe) {
            while (ps < pe) {
                printf("%c", *ps);
                ps++;
            }

            printf("\n");
        } else {
            printf("<blank>\n");
        }

        ps = strstr(n, st);
        pe = strstr(n, et);
    }

    return 0;
}