// Paiza 問題集 Cランク・スキルチェック過去問題セット みかんの仕分け C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan
#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        int t = (w + (n / 2)) / n;
        int r = n * t;
        int a = n;
        if (a < r) {
            a = r;
        }
        
        printf("%d\n", a);
    }
    
    return 0;
}
