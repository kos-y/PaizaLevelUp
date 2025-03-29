#include <stdio.h>
#include <stdlib.h>

struct LINE {
    char line[101];
    struct LINE* p_next;
};

int main()
{
    int line_count;
    scanf("%d ", &line_count);

    struct LINE* p_begin = NULL;
    struct LINE* p_current = NULL;

    for (int i = 0; i < line_count; i++) {
        if (p_begin == NULL) {
            p_begin = (struct LINE*)calloc(1, sizeof(struct LINE));
            p_current = p_begin;
        }
        else {
            p_current->p_next = (struct LINE*)calloc(1, sizeof(struct LINE));
            p_current = p_current->p_next;
        }

        fgets(p_current->line, sizeof(p_current->line), stdin);
    }

    p_current = p_begin;
    while (p_current != NULL) {
        printf("%s", p_current->line);
        p_current = p_current->p_next;
    }

    p_current = p_begin;
    while (p_current != NULL) {
        struct LINE* p_next  = p_current->p_next;
        free(p_current);
        p_current = p_next;
    }

    return 0;
}