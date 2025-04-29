// Paiza 問題集 Cランク・スキルチェック過去問題セット 【殿堂入りキャンペーン】みかんの仕分け（力試し編） C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_00
#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d ", &n, &m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d ", &w);
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