// Paiza 問題集 Cランク・スキルチェック過去問題セット 「みかんの仕分け」を解くために：part2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_02
#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        printf("%s\n", w % n == 0 ? "Yes" : "No");
    }
    
    return 0;
}
