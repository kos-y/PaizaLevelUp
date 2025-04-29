// Paiza 問題集 Cランク・スキルチェック過去問題セット 単語のカウント C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/word-count
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1002

struct W {
    char w[N];
    int c;
    struct W* pn;
};

int main()
{
    struct W* ps = NULL;
    struct W* pp = NULL;
    struct W* pc = NULL;
    
    char s[N];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (ps == NULL) {
            ps = (struct W*)calloc(1, sizeof(struct W));
            strcpy(ps->w, p);
            ps->c = 1;
        } else {
            pp = NULL;
            pc = ps;
            while (pc != NULL) {
                if (strcmp(pc->w, p) == 0) {
                    pc->c++;
                    break;
                }
                
                pp = pc;
                pc = pc->pn;
            }

            if (pc == NULL) {
                struct W** ppt = pp == NULL ? &ps->pn : &pp->pn;

                *ppt = (struct W*)calloc(1, sizeof(struct W));
                strcpy((*ppt)->w, p);
                (*ppt)->c = 1;
            }
        }
        
        p = strtok(NULL, " ");
    }
    
    pc = ps;
    while (pc != NULL) {
        printf("%s %d\n", pc->w, pc->c);
        pc = pc->pn;
    }
    
    pc = ps;
    while (pc != NULL) {
        struct W* buf = pc->pn;
        free(pc);
        pc = buf;
    }
    
    return 0;
}