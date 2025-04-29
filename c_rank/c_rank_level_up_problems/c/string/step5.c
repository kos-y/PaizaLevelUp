// Paiza 問題集 Cランクレベルアップメニュー 数字の文字列操作（時刻1） C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_string_step5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[6];

    scanf("%5s", s);
    char* p = strtok(s, ":");
    while (p != NULL) {
        printf("%d\n", atoi(p));
        p = strtok(NULL, ":");
    }
    
    return 0;
}
