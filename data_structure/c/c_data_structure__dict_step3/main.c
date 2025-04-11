#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct C {
    char s[4];
    int c;
    
    struct C* pn;
};

struct C* search(struct C* ps, char* s);
int sort_func(const void* x, const void* y);

int main()
{
    int n;
    scanf("%d ", &n);
    
    struct C* ps = NULL;
    struct C* p = NULL;
    
    char s[4];
    int c = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", s);

        if (ps == NULL) {
            ps = (struct C*)calloc(1, sizeof(struct C));
            strcpy(ps->s, s);
            ps->c = 1;
            p = ps;
            c++;
        }
        else {
            struct C* pm = search(ps, s);
            if (pm != NULL) {
                pm->c++;    
            }
            else {
                p->pn = (struct C*)calloc(1, sizeof(struct C));
                strcpy(p->pn->s, s);
                p->pn->c = 1;
                p = p->pn;
                c++;
            }
        }
    }
    
    struct C** sort = (struct C**)malloc(sizeof(struct C*) * c);
    p = ps;
    for (int i = 0; p != NULL; i++, p = p->pn) {
        sort[i] = p;
    }
    
    qsort(sort, c, sizeof(struct C*), sort_func);
    for (int i = 0; i < c; i++) {
        printf("%s %d\n", sort[i]->s, sort[i]->c);
    }
    
    p = ps;
    while (p != NULL) {
        struct C* pt = p->pn;
        free(p);
        p = pt;
    }
    free(sort);

   return 0;
}

struct C* search(struct C* ps, char* s)
{
    struct C* p = ps;
    
    while (p != NULL) {
        if (strcmp(p->s, s) == 0) {
            break;
        }
        
        p = p->pn;
    }
    
    return p;
}

int sort_func(const void* x, const void* y)
{
    struct C* p1 = *(struct C**)x;
    struct C* p2 = *(struct C**)y;
    
    return strcmp(p1->s, p2->s);
}