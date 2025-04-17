#include <stdio.h>
#include <stdlib.h>

struct GS {
    int g, s;
};

int cmp(const void* a, const void* b);

int main()
{
    int n;
    
    scanf("%d", &n);
    struct GS* gs = (struct GS*)calloc(n, sizeof(struct GS));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &gs[i].g, &gs[i].s);
    }
    
    qsort(gs, n, sizeof(struct GS), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", gs[i].g, gs[i].s);
    }
    
    free(gs);
    return 0;
}

int cmp(const void* a, const void* b)
{
    struct GS* pa = (struct GS*)a;
    struct GS* pb = (struct GS*)b;
    
    if (pa->s != pb->s) {
        return pb->s - pa->s;
    }
    else {
        return pb->g - pa->g;
    }
}
