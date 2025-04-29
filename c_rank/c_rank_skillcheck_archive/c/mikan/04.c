// Paiza 問題集 Cランク・スキルチェック過去問題セット 「みかんの仕分け」を解くために：part4 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_04
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, m, p;
    
    scanf("%d %d", &n, &m);
    scanf("%d", &p);
    int* pk = (int*)calloc(p, sizeof(int));
    for (int i = 0; i < p; i++) {
        scanf("%d", &pk[i]);
    }

    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        int j = 0, l = 0, o = INT_MAX;
        for (j = 0; j < p; j++) {
            if (pk[j] % n != 0) {
                continue;
            }

            if (abs(pk[j] - w) < o) {
                o = abs(pk[j] - w);
                l = j;
            }
        }
        
        printf("%d\n", pk[l]);
    }
    
    free(pk);
    return 0;
}