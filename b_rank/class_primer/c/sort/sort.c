// Paiza 問題集 クラス・構造体メニュー 構造体の整列 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__sort
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b);

struct U {
    char n[21], b[6], s[21];
    int o;
};

int main()
{
    int n;

    scanf("%d", &n);
    struct U* pu = (struct U*)calloc(n, sizeof(struct U));
    for (int i = 0; i < n; i++) {
        scanf("%20s %d %5s %20s", pu[i].n, &pu[i].o, pu[i].b, pu[i].s);
    }

    qsort(pu, n, sizeof(struct U), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s %d %s %s\n", pu[i].n, pu[i].o, pu[i].b, pu[i].s);
    }

    free(pu);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct U* pa = (struct U*)a;
    struct U* pb = (struct U*)b;
    
    return pa->o - pb->o;
}