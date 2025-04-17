#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct H {
    char s[51];
    int a;
};

int cmp(const void* a, const void* b);

int main()
{
    int n;

    scanf("%d ", &n);
    struct H* h = (struct H*)calloc(n, sizeof(struct H));
    for (int i = 0; i < n; i++) {
        scanf("%s ", h[i].s);
    }
    
    int m;
    scanf("%d ", &m);
    for (int i = 0; i < m; i++) {
        char s[51];
        int a;

        scanf("%s %d ", s, &a);
        for (int j = 0; j < n; j++) {
            if (strcmp(h[j].s, s) == 0) {
                h[j].a += a;
            }
        }
    }
    
    qsort(h, n, sizeof(struct H), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d\n", h[i].a);
    }
    
    free(h);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct H* pa = (struct H*)a;
    struct H* pb = (struct H*)b;
    
    return strcmp(pa->s, pb->s);
}
