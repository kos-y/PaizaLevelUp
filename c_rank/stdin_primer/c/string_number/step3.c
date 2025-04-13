#include <stdio.h>
#include <stdlib.h>
#define LEN 10

struct S {
    char s[LEN + 1];
    struct S* p_next;
};

int main()
{
    int n;
    scanf("%d", &n);

    char f[5];
    sprintf(f, "%%%ds", LEN);

    struct S* p_start = NULL;
    struct S* p_current = NULL;
    for (int i = 0; i < n; i++) {
        struct S* p = (struct S*)calloc(1, sizeof(struct S));
        if (i == 0) {
            p_start = p;
            p_current = p;
        }
        else {
            p_current->p_next = p;
            p_current = p;
        }

        scanf(f, p_current->s);
    }

    p_current = p_start;
    while (p_current != NULL) {
        printf("%s\n", p_current->s);
        p_current = p_current->p_next;
    }

    p_current = p_start;
    while (p_current != NULL) {
        struct S* p = p_current->p_next;
        free(p_current);
        p_current = p;
    }

    return 0;
}