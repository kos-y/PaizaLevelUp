// Paiza 問題集 配列活用メニュー 二人三脚 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__find_pair
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct P {
    int x, y, s;
    struct P* next;
};

struct P* set(int x, int y);
int cmp(const void* a, const void* b);
int cmpP(const void* a, const void* b);

int main()
{
    int n;
    scanf("%d", &n);
    
    int* a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    
    struct P* p_start = NULL;
    struct P* p_current = NULL;
    int m = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p_start == NULL) {
                p_start = set(a[i], a[j]);
                p_current = p_start;
                m++;
            }
            else {
                p_current->next = set(a[i], a[j]);
                p_current = p_current->next;
                m++;
            }
        }
    }
    
    struct P* pp = (struct P*)malloc(sizeof(struct P) * m);
    p_current = p_start;
    for (int i = 0; i < m; i++) {
        pp[i] = *p_current;
        p_current = p_current->next;
    }
    
    qsort(pp, m, sizeof(struct P), cmpP);
    printf("%d\n", pp[0].x);
    printf("%d\n", pp[0].y);
    
    free(pp);
    p_current = p_start;
    while (p_current != NULL) {
        struct P* p = p_current->next;
        free(p_current);
        p_current = p;
    }
    return 0;
}

struct P* set(int x, int y)
{
    struct P* p = (struct P*)calloc(1, sizeof(struct P));
    p->x = x;
    p->y = y;
    p->s = abs(x - y);
    return p;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int cmpP(const void* a, const void* b)
{
    struct P* pa = (struct P*)a;
    struct P* pb = (struct P*)b;
    
    return pa->s - pb->s;
}