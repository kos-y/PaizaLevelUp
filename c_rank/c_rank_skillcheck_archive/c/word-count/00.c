#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1001

struct W {
    char w[N];
    int c;
    struct W* next;
};

int main()
{
    struct W* p_start = NULL;
    struct W* p_prev = NULL;
    struct W* p_current = NULL;
    
    char s[1024 * 1024];
    fgets(s, sizeof(s), stdin);
    
    char* p = strtok(s, " ");
    while (p != NULL) {
        char* l = strchr(p, '\n');
        if (l != NULL) {
            *l = '\0';
        }

        if (p_start == NULL) {
            p_start = (struct W*)calloc(1, sizeof(struct W));
            strcpy(p_start->w, p);
            p_start->c = 1;
        }
        else {
            p_prev = NULL;
            p_current = p_start;
            while (p_current != NULL) {
                if (strcmp(p_current->w, p) == 0) {
                    p_current->c++;
                    break;
                }
                
                p_prev = p_current;
                p_current = p_current->next;
            }
            if (p_current == NULL) {
                if (p_prev == NULL) {
                    p_start->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_start->next->w, p);
                    p_start->next->c = 1;
                }
                else {
                    p_prev->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_prev->next->w, p);
                    p_prev->next->c = 1;
                }
            }
        }
        
        p = strtok(NULL, " ");
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        printf("%s %d\n", p_current->w, p_current->c);
        p_current = p_current->next;
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct W* buf = p_current->next;
        free(p_current);
        p_current = buf;
    }
    
    return 0;
}