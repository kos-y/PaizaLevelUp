// Paiza 問題集 Cランクレベルアップメニュー インデックス取得 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_for_step3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;

    scanf("%d ", &n);
    int* a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            printf("%d\n", i + 1);
            break;
        }
    }
    
    free(a);
    return 0;
}
