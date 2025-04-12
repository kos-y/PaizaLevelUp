#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    int v;
    struct V* pn;
};

int main()
{
    int n;
    scanf("%d ", &n);
    
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    struct V* ps = NULL;
    struct V* p = NULL;
    for (int i = 0; i < n; i++) {
        if (ps == NULL) {
            ps = (struct V*)calloc(1, sizeof(struct V));
            ps->v = pa[i];
            p = ps;
        }    
        else if (p->v != pa[i]) {
            p->pn = (struct V*)calloc(1, sizeof(struct V));
            p->pn->v = pa[i];
            p = p->pn;
        }
    }
    
    p = ps;
    while (p != NULL) {
        printf("%d", p->v);
        if (p->pn != NULL) {
            printf(" ");
        }
        
        p = p->pn;
    }
    printf("\n");
    
    free(pa);
    p = ps;
    while (p != NULL) {
        struct V* p2 = p->pn;
        free(p);
        p = p2;
    }

    return 0;
}