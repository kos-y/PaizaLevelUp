#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct W {
    char s[1001];
    int c;
    struct W* next;
};

int main()
{
    char s[1001];
    fgets(s, sizeof(s), stdin);
    
    struct W* p_start = NULL;
    struct W* p_prev = NULL;
    struct W* p_current = NULL;
    char* p = strtok(s, " ");
    while (p != NULL) {
        char* l = strchr(p, '\n');
        if (l != NULL) {
            *l = '\0';
        }
        
        if (p_start == NULL) {
            p_start = (struct W*)calloc(1, sizeof(struct W));
            strcpy(p_start->s, p);
            p_start->c = 1;
            printf("%s\n", p);
        }
        else {
            p_prev = NULL;
            p_current = p_start;
            while (p_current != NULL) {
                if (strcmp(p_current->s, p) == 0) {
                    p_current->c++;
                    break;
                }
                
                p_prev = p_current;
                p_current = p_current->next;
            }
            if (p_current == NULL) {
                if (p_prev == NULL) {
                    p_start->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_start->next->s, p);
                    p_start->next->c = 1;
                }
                else {
                    p_prev->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_prev->next->s, p);
                    p_prev->next->c = 1;
                }
                printf("%s\n", p);
            }
        }
        
        p = strtok(NULL, " ");
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct W* buf = p_current->next;
        printf("%d\n", p_current->c);
        free(p_current);
        p_current = buf;
    }
    
    return 0;
}