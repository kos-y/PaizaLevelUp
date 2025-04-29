// Paiza 問題集 Cランク・スキルチェック過去問題セット 「みかんの仕分け」を解くために：part5 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/mikan_05
#include <stdio.h>
#include <stdlib.h>

#define W 1500

int main()
{
    int n, k, w;

    scanf("%d %d", &n, &k);
    scanf("%d", &w);
    for (int i = 1; i <= W; i++) {
        if (i % n != 0) {
            continue;
        }

        printf("%d %d\n", i, (int)abs(i - w));
    }

    return 0;
}