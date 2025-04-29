// Paiza 問題集 Cランク・スキルチェック過去問題セット 「みかんの仕分け」を解くために：part1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_01
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d %d\n", n, m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        printf("%d\n", w);
    }

    return 0;
}