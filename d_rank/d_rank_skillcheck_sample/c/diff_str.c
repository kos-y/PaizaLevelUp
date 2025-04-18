// Paiza 問題集 Dランク・スキルチェック見本セット 文字の一致 C編
// https://paiza.jp/works/mondai/d_rank_skillcheck_sample/diff_str
#include <stdio.h>
#include <string.h>

#define LEN 100

int main()
{
    char a[LEN + 1], b[LEN + 1];
    char format[6];

    sprintf(format, "%%%ds", LEN);
    scanf(format, a);
    scanf(format, b);

    char result[3];
    if (strcmp(a, b) == 0) {
        strcpy(result, "OK");
    } else {
        strcpy(result, "NG");
    }

    printf("%s\n", result);
    return 0;
}