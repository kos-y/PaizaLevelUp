#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct W {
    char s[1001];
    struct W* pn;
};

int main()
{
    char s[1002];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    struct W* ps;
    struct W* pp;
    struct W* pc;
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (ps == NULL) {
            ps = (struct W*)calloc(1, sizeof(struct W));
            strcpy(ps->s, p);
            printf("%s\n", p);
        }
        else {
            pp = NULL;
            pc = ps;
            while (pc != NULL) {
                if (strcmp(pc->s, p) == 0) {
                    printf("already_been\n");
                    break;
                }
                
                pp = pc;
                pc = pc->pn;
            }

            if (pc == NULL) {
                if (pp == NULL) {
                    ps->pn = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(ps->pn->s, p);
                }
                else {
                    pp->pn = (struct W*)calloc(1, sizeof(struct W));
                    strcpy(pp->pn->s, p);

                }
                printf("%s\n", p);
            }
        }
        
        p = strtok(NULL, " ");
    }
    
    pc = ps;
    while (pc != NULL) {
        struct W* buf = pc->pn;
        free(pc);
        pc = buf;
    }
    
    return 0;
}