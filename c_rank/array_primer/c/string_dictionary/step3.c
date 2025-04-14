#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    char s[11];
    struct V* next;
};

int cmp(const void* a, const void* b);

int main()
{
    int n;
    scanf("%d ", &n);
    
    struct V* p_start = NULL;
    struct V* p_current = NULL;
    
    char s[256];
    fgets(s, sizeof(s), stdin);
    
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (p_start == NULL) {
            p_start = (struct V*)calloc(1, sizeof(struct V));
            strcpy(p_start->s, p);
            p_current = p_start;
        }
        else {
            p_current->next = (struct V*)calloc(1, sizeof(struct V));
            strcpy(p_current->next->s, p);
            p_current = p_current->next;
        }
        p = strtok(NULL, " ");
    }
    
    char** ps = (char**)calloc(n, sizeof(char*));
    p_current = p_start;
    for (int i = 0; p_current != NULL; i++) {
        ps[i] = p_current->s;
        p_current = p_current->next;
    }
    
    qsort(ps, n, sizeof(char*), cmp);
    for (int i = 0; i < n; i++) {
        char* pl = strchr(ps[i], '\n');
        if (pl != NULL) {
            *pl = '\0';
        }
        printf("%s\n", ps[i]);
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct V* p_b = p_current->next;
        free(p_current);
        p_current = p_b;
    }
    free(ps);
    
    return 0;
}

int cmp(const void* a, const void* b)
{
    char** pa = (char**)a;
    char** pb = (char**)b;
    
    return strcmp(*pa, *pb);
}