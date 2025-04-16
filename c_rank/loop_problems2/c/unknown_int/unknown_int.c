#include <stdio.h>
#include <stdlib.h>

struct V
{
    int v;
    struct V* pn;
};

int main()
{
    int a;
    struct V* ps = NULL;
    struct V* pc = NULL;

    while (1) {
        scanf("%d", &a);
        if (ps == NULL) {
            ps = (struct V*)calloc(1, sizeof(struct V));
            ps->v = a;
            pc = ps;
        }
        else {
            pc->pn = (struct V*)calloc(1, sizeof(struct V));
            pc->pn->v = a;
            pc = pc->pn;
        }

        if (a == -1) {
            break;
        }
    }

    pc = ps;
    while (pc != NULL) {
        printf("%d\n", pc->v);
        pc = pc->pn;
    }

    pc = ps;
    while (pc != NULL) {
        struct V* p = pc->pn;
        free(pc);
        pc = p;
    }

    return 0;
}