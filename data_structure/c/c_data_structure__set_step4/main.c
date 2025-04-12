#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    char v[11];
    struct V* next;
};

int main()
{
    int n;
    scanf("%d ", &n);
    
    char a[1100];
    fgets(a, sizeof(a), stdin);
    
    struct V* p_start = NULL;
    struct V* p = NULL;
    
    char* pa = strtok(a, " ");
    while (pa != NULL) {
        if (p_start == NULL) {
            p_start = (struct V*)calloc(1, sizeof(struct V));
            strcpy(p_start->v, pa);
            p = p_start;
            char* cp = strchr(p_start->v, '\n');
            if (cp != NULL) {
                *cp = '\0';
            }
        }    
        else {
            p->next = (struct V*)calloc(1, sizeof(struct V));
            strcpy(p->next->v, pa);
            p = p->next;
            char* cp = strchr(p->v, '\n');
            if (cp != NULL) {
                *cp = '\0';
            }
        }
        
        pa = strtok(NULL, " ");
    }
    
    p = p_start->next;
    while (p != NULL) {
        struct V* p2 = p_start;
        while (p2 != p) {
            if (strcmp(p->v, p2->v) == 0) {
                printf("Yes\n");
                break;
            }
            
            p2 = p2->next;
        }
        if (p2 == p) {
            printf("No\n");
        }
        
        p = p->next;
    }
    
    p = p_start;
    while (p != NULL) {
        struct V* p2 = p->next;
        free(p);
        p = p2;
    }

    return 0;
}