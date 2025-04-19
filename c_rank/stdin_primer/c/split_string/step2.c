// Paiza 問題集 標準入力メニュー 3 つの文字列の半角スペース区切りでの分割 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_string_step2
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "He likes paiza";

    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}