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
    int n, m, k;
    scanf("%d %d %d ", &n, &m, &k);
    
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
            struct V* p_k = (struct V*)calloc(1, sizeof(struct V));
            p_k->v = k;
            if (p_current->prev == NULL) {
                p_start = p_k;
                p_k->next = p_current;
                p_current->prev = p_k;
                break;
            }
            else {
                p_current->prev->next = p_k;
                p_current->prev = p_k;
                p_k->next = p_current;
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