#include <stdio.h>
#include <stdlib.h>

struct S {
    int a;
    int b;

    struct S* next;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct S* ps = NULL;
    struct S* pc = NULL;
    for (int i = 0; i < n; i++) {
        struct S* p = (struct S*)calloc(1, sizeof(struct S));
        if (i == 0) {
            ps = p;
            pc = p;
        }
        else {
            pc->next = p;
            pc = p;
        }
    }

    for (pc = ps; pc != NULL; pc = pc->next) {
        scanf("%d %d", &pc->a, &pc->b);
    }

    for (pc = ps; pc != NULL; pc = pc->next) {
        printf("%d %d\n", pc->a, pc->b);
    }

    for (pc = ps; pc != NULL; ) {
        struct S* p = pc->next;
        free(pc);
        pc = p;
    }

    return 0;
}