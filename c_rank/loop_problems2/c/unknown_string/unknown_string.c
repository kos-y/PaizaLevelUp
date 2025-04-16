#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1

struct V {
    char s[LEN + 1];
    struct V* pn;
};

int main()
{
    char s[LEN + 1];
    struct V* ps = NULL;
    struct V* pc = NULL;

    while (1) {
        scanf("%s", &s);
        if (ps == NULL) {
            ps = (struct V*)calloc(1, sizeof(struct V));
            strcpy(ps->s, s);
            pc = ps;
        }
        else {
            pc->pn = (struct V*)calloc(1, sizeof(struct V));
            strcpy(pc->pn->s, s);
            pc = pc->pn;
        }

        if (strcmp(s, "EOF") == 0) {
            break;
        }
    }

    pc = ps;
    while (pc != NULL) {
        printf("%s\n", pc->s);
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