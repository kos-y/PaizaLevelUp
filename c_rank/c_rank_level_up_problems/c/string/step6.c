// Paiza 問題集 Cランクレベルアップメニュー 数字の文字列操作（時刻2） C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_string_step6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[6], a[2];

    scanf("%5s", s);
    char* p = strtok(s, ":");
    for (int i = 0; i < 2; i++) {
        a[i] = atoi(p);
        p = strtok(NULL, ":");
    }
    
    a[1] += 30;
    if (a[1] > 59) {
        a[0]++;
        a[1] -= 60;
    }

    printf("%02d:%02d\n", a[0], a[1]);
    return 0;
}
