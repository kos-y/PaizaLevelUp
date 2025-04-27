// Paiza 問題集 データセット選択メニュー 重複の削除 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step2
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
    scanf("%d ", &n);
    
    struct V* ps = NULL;
    struct V* p = NULL;
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (ps == NULL) {
            ps = (struct V*)calloc(1, sizeof(struct V));
            ps->v = a;
            p = ps;
        }    
        else if (p->v != a) {
            p->pn = (struct V*)calloc(1, sizeof(struct V));
            p->pn->v = a;
            p = p->pn;
        }
    }
    
    p = ps;
    while (p != NULL) {
        printf("%d", p->v);
        if (p->pn != NULL) {
            printf(" ");
        }
        
        struct V* p2 = p->pn;
        free(p);
        p = p2;
    }

    printf("\n");
    return 0;
}