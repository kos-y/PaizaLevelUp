// Paiza 問題集 Cランク・スキルチェック過去問題セット 「みかんの仕分け」を解くために：part3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_03
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k[2];
    
    scanf("%d %d", &n, &m);
    scanf("%d %d", &k[0], &k[1]);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        printf("%d\n", k[abs(k[0] - w) < abs(k[1] - w) ? 0 : 1]);
    }
    
    return 0;
}