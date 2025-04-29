// Paiza 問題集 Cランク・スキルチェック過去問題セット 「単語のカウント」を解くために:part6 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/word-count_06
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct W {
    char s[1001];
    int c;
    struct W* pn;
};

int main()
{
    char s[1002];
    int i = 0;
    struct W *ps = NULL, *pp = NULL, *pc = NULL;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        if (ps == NULL) {
            ps = (struct W*)calloc(1, sizeof(struct W));
            strcpy(ps->s, p);
            ps->c = i;
        } else {
            pp = NULL;
            pc = ps;
            while (pc != NULL) {
                if (strcmp(pc->s, p) == 0) break;

                pp = pc;
                pc = pc->pn;
            }
            
            if (pc == NULL) {
                struct W** ppt = pp == NULL ? &ps->pn : &pp->pn;

                *ppt = (struct W*)calloc(1, sizeof(struct W));
                strcpy((*ppt)->s, p);
                (*ppt)->c = i;
            }
        }
        
        p = strtok(NULL, " ");
        i++;
    }
    
    char s2[1001];
    fflush(stdin);
    scanf("%s", s2);
    pc = ps;
    while (pc != NULL) {
        if (strcmp(pc->s, s2) == 0) {
            printf("%d\n", pc->c);
            break;
        }
        
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