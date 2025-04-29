// Paiza 問題集 Cランク・スキルチェック過去問題セット 「単語のカウント」を解くために:part4 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/word-count_04
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
    struct W *ps = NULL, *pp = NULL, *pc = NULL;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (ps == NULL) {
            ps = (struct W*)calloc(1, sizeof(struct W));
            strcpy(ps->s, p);
            printf("%s\n", p);
        } else {
            pp = NULL;
            pc = ps;
            while (pc != NULL) {
                if (strcmp(pc, p) == 0) {
                    break;
                }
                
                pp = pc;
                pc = pc->pn;
            }

            if (pc == NULL) {
                struct W** ppt = pp == NULL ? &ps->pn : &pp->pn;

                *ppt = (struct W*)calloc(1, sizeof(struct W));
                strcpy((*ppt)->s, p);
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