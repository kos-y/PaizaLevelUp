// Paiza 問題集 データセット選択メニュー 重複の判定 1 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    int v;
    struct V* pn;
};

int main()
{
    int n;
    struct V* ps = NULL;
    struct V* p = NULL;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (ps == NULL) {
            ps = (struct V*)calloc(1, sizeof(struct V));
            ps->v = a;
            p = ps;
        }    
        else {
            p->pn = (struct V*)calloc(1, sizeof(struct V));
            p->pn->v = a;
            p = p->pn;
        }
    }
    
    p = ps->pn;
    while (p != NULL) {
        struct V* p2 = ps;

        while (p2 != p) {
            if (p->v == p2->v) {
                printf("Yes\n");
                break;
            }
            
            p2 = p2->pn;
        }
        
        if (p2 == p) {
            printf("No\n");
        }
        
        p = p->pn;
    }
    
    p = ps;
    while (p != NULL) {
        struct V* pn = p->pn;

        free(p);
        p = pn;
    }

    return 0;
}