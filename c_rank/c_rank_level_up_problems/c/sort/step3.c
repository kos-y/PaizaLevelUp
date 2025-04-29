// Paiza 問題集 Cランクレベルアップメニュー 辞書式ソート C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_sort_step3
#include <stdio.h>
#include <stdlib.h>

struct F {
    int a, b;
};

int cmp(const void* a, const void* b);

int main()
{
    int n;

    scanf("%d", &n);
    struct F* a = (struct F*)calloc(n, sizeof(struct F));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].a, &a[i].b);
    }
    
    qsort(a, n, sizeof(struct F), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", a[i].a, a[i].b);
    }
    
    free(a);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct F* pa = (struct F*)a;
    struct F* pb = (struct F*)b;
    
    return pa->a != pb->a ? pb->a - pa->a : pb->b - pa->b;
}