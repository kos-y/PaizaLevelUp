#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct W {
    char s[1001];
    struct W* next;
};

int main()
{
    char s[1002];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    struct W* p_start;
    struct W* p_prev;
    struct W* p_current;
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (p_start == NULL) {
            p_start = (struct W*)calloc(1, sizeof(struct W));
            strcpy(p_start->s, p);
            printf("%s\n", p);
        }
        else {
            p_prev = NULL;
            p_current = p_start;
            while (p_current != NULL) {
                if (strcmp(p_current, p) == 0) {
                    break;
                }
                
                p_prev = p_current;
                p_current = p_current->next;
            }
            if (p_current == NULL) {
                if (p_prev == NULL) {
                    p_start->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_start->next->s, p);
                }
                else {
                    p_prev->next = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(p_prev->next->s, p);
                }
                printf("%s\n", p);
            }
        }
        
        p = strtok(NULL, " ");
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct W* buf = p_current->next;
        free(p_current);
        p_current = buf;
    }
    
    return 0;
}