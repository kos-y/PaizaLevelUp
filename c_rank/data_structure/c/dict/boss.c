#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S {
    char s[4];
    int i;
    
    struct S* pn;
};

int main()
{
    int n, q;
    scanf("%d %d ", &n, &q);

    struct S* ps = NULL;
    struct S* p = NULL;
    for (int i = 0; i < n; i++) {
        char s[4];
        scanf("%s", s);
        
        if (ps == NULL) {
            ps = (struct S*)calloc(1, sizeof(struct S));
            strcpy(ps->s, s);
            ps->i = i + 1;
            p = ps;
        }
        else {
            p->pn = (struct S*)calloc(1, sizeof(struct S));
            strcpy(p->pn->s, s);
            p->pn->i = i + 1;
            p = p->pn;
        }
    }
    
    for (int i = 0; i < q; i++) {
        char t[4];
        scanf("%s", t);
        
        p = ps;
        while (p != NULL) {
            if (strcmp(p->s, t) == 0) {
                printf("%d\n", p->i);
                break;
            }
            p = p->pn;
        }
        if (p == NULL) {
            printf("-1\n");   
        }
    }
    
    p = ps;
    while (p != NULL) {
        struct S* p2 = p->pn;
        free(p);
        p = p2;
    }

    return 0;
}