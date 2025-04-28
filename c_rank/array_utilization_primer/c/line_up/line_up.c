// Paiza 問題集 配列活用メニュー 場所取り C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__line_up
#include <stdio.h>
#include <stdlib.h>

struct A {
    int x, i, e;
};

int cmp(const void* a, const void* b);

int main()
{
    int n, k, f;
    scanf("%d %d %d ", &n, &k, &f);
    
    int m = k - f;
    for (int i = 0; i < f; i++) {
        int dummy;
        scanf("%d", &dummy);
    }
    
    struct A* a = (struct A*)calloc(m, sizeof(struct A));
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i].x);
        a[i].i = i;
        a[i].e = 1;
    }
    
    struct A* b = (struct A*)calloc(m, sizeof(struct A));
    int l = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[j].x == i) {
                b[l++] = a[j];
                break;
            }
        }
    }
    
    qsort(b, m, sizeof(struct A), cmp);
    for (int i = 0; i < m; i++) {
        if (b[i].e) {
            printf("%d\n", b[i].x);
        }
    }
    
    free(a);
    free(b);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct A* pa = (struct A*)a;
    struct A* pb = (struct A*)b;
    
    return pa->i - pb->i;
}