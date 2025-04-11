#include <stdio.h>
#include <stdlib.h>
#define LEN 10

struct S {
    char s[LEN + 1];
    int a;

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
        scanf("%s %d", pc->s, &pc->a);
    }

    pc = ps;
    for (int i = 1; pc != NULL; pc = pc->next, i++) {
        printf("%s %d\n", pc->s, pc->a);
    }

    for (pc = ps; pc != NULL; ) {
        struct S* p = pc->next;
        free(pc);
        pc = p;
    }

    return 0;
}