// Paiza 問題集 Dランクレベルアップメニュー 占い C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__conditions_branch_boss
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[4];
    if (n == 7) {
        strcpy(a, "Yes");
    } else {
        strcpy(a, "No");
    }

    printf("%s\n", a);
    return 0;
}