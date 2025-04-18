#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 21

struct W {
    char w[LEN];
    struct W* prev;
    struct W* next;
};

struct W* p_start = NULL;

void wdelete(char* w);
void wadd(char* w);

int main()
{
    int n;
    scanf("%d ", &n);
    
    for (int i = 0; i < n; i++) {
        char w[LEN];
        scanf("%s ", w);
        
        if (p_start != NULL) {
            wdelete(w);
        }
        wadd(w);
    }
    
    struct W* p = p_start;
    int d = 0;
    while (p != NULL) {
        printf("%s\n", p->w);
        p = p->next;
    }

    p = p_start;
    while (p != NULL) {
        struct W* buf = p;
        p = p->next;
        free(buf);
    }
    
    return 0;
}

void wdelete(char* w)
{
    struct W* p = p_start;
    
    while (p != NULL) {
        if (strcmp(p->w, w) == 0) {
            if (p == p_start) {
                if (p->next == NULL) {
                    free(p);
                    p_start = NULL;
                }
                else {
                    p_start = p->next;
                    p->prev = NULL;
                    free(p);
                }
            }
            else {
                if (p->next == NULL) {
                    if (p->prev != NULL) {
                        p->prev->next = NULL;
                    }
                    free(p);
                }
                else {
                    if (p->prev != NULL) {
                        p->prev->next = p->next;
                    }
                    p->next->prev = p->prev;
                    free(p);
                }
            }
            break;
        }
        p = p->next;
    }
}

void wadd(char* w)
{
    struct W* p = (struct W*)calloc(1, sizeof(struct W));
    
    strcpy(p->w, w);
    if (p_start != NULL) {
        p->next = p_start;
        p_start->prev = p;
    }
    p_start = p;
}