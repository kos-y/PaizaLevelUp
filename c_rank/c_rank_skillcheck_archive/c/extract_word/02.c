// Paiza 問題集 Cランク・スキルチェック過去問題セット 文字列の抽出 : part2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/extract_word_02
#include <stdio.h>

int main()
{
    char st[101], et[101], n[5001];
    int si, ei;

    scanf("%100s %100s", st, et);
    scanf("%5000s", n);
    scanf("%d %d", &si, &ei);
    si--;
    ei--;

    si += strlen(st);
    if (si < ei) {
        while (si < ei) {
            printf("%c", n[si]);
            si++;
        }

        printf("\n");
    } else {
        printf("<blank>\n");
    }

    return 0;
}