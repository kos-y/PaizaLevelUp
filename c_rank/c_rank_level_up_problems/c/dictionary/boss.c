// Paiza 問題集 Cランクレベルアップメニュー 辞書 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_dictionary_boss
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b);

struct IJ { int i, j; };
struct JK { int j, k; };

int main()
{
    int p, q, r;

    scanf("%d %d %d", &p, &q, &r);
    struct IJ* ij = (struct IJ*)calloc(p, sizeof(struct IJ));
    for (int i = 0; i < p; i++) {
        scanf("%d %d", &ij[i].i, &ij[i].j);
    }
    
    struct JK* jk = (struct JK*)calloc(q, sizeof(struct JK));
    for (int i = 0; i < q; i++) {
        scanf("%d %d", &jk[i].j, &jk[i].k);
    }
    
    qsort(ij, p, sizeof(struct IJ), cmp);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            if (ij[i].j == jk[j].j) {
                printf("%d %d\n", ij[i].i, jk[j].k);
                break;
            }
        }
    }
    
    free(ij);
    free(jk);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct IJ* pa = (struct IJ*)a;
    struct IJ* pb = (struct IJ*)b;
    
    return pa->i - pb->i;
}