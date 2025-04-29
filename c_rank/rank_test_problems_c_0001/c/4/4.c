// Paiza 問題集 Cランク実力確認問題セット1 背の順 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/rank_test_problems_c_0001/rank_test_problems_c_0001__4
#include <stdio.h>
#include <stdlib.h>

struct S {
    int a;
    char s[11];
};

int cmp(const void* a, const void* b);

int main()
{
    int n;

    scanf("%d", &n);
    struct S* p = (struct S*)calloc(n, sizeof(struct S));
    for (int i = 0; i < n; i++) {
        scanf("%d %10s", &p[i].a, p[i].s);
    }

    qsort(p, n, sizeof(struct S), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s\n", p[i].s);
    }

    free(p);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct S* pa = (struct S*)a;
    struct S* pb = (struct S*)b;
    
    return pb->a - pa->a;
}