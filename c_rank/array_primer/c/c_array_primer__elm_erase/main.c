#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    int i, v;
    struct V* prev;
    struct V* next;
};

int main()
{
    int n, m;
    scanf("%d %d ", &n, &m);
    
    char ca[30];
    fgets(ca, sizeof(ca), stdin);
    
    char* p = strtok(ca, " ");
    struct V* p_start = NULL;
    struct V* p_current = NULL;
    for (int i = 0; p != NULL; i++, p = strtok(NULL, " ")) {
        if (p_start == NULL) {
            p_current = p_start = (struct V*)calloc(1, sizeof(struct V));
            p_start->i = i;
            p_start->v = atoi(p);
        }
        else {
            p_current->next = (struct V*)calloc(1, sizeof(struct V));
            p_current->i = i;
            p_current->next->v = atoi(p);
            p_current->next->prev = p_current;
            p_current = p_current->next;
        }
    }
    
    p_current = p_start;
    for (int i = 0; p_current != NULL; i++, p_current = p_current->next) {
        if (i == m - 1) {
            struct V* p_target = p_current;
            if (p_target->prev == NULL) {
                p_target->next->prev = NULL;
                p_start = p_target->next;
                break;
            }
            else if (p_target->next == NULL) {
                p_target->prev->next = NULL;
            }
            else {
                p_target->prev->next = p_target->next;
                p_target->next->prev = p_target->prev;
                free(p_target);
                break;
            }
        }
    }

    p_current = p_start;
    while (p_current != NULL) {
        printf("%d\n", p_current->v);
        p_current = p_current->next;
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct V* p_buf = p_current->next;
        free(p_current);
        p_current = p_buf;
    }

    return 0;
}