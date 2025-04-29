// Paiza 問題集 Cランクレベルアップメニュー  整数と文字列 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_string_step1
#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char a[6];

        scanf("%5s", a);
        printf("%lu\n", strlen(a));
    }

    return 0;
}
