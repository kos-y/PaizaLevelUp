// Paiza 問題集 データセット選択メニュー 動的配列 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_boss
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V {
    int v;
    struct V* p;
    struct V* n;
};

void input_values(int n, struct V** ps, struct V** pl);
void query(int q, struct V** ps, struct V** pl);
void push_back(struct V** ps, struct V** pl);
void pop_back(struct V** pl);
void print(struct V* s);
void dispose(struct V** ps, struct V** pl);

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    
    struct V* s = NULL;
    struct V* l = NULL;
    input_values(n, &s, &l);
    query(q, &s, &l);
    dispose(&s, &l);
    return 0;
}

void input_values(int n, struct V** ps, struct V** pl)
{
    for (int i = 0; i < n; i++) {
        push_back(ps, pl);
    }
}

void query(int q, struct V** ps, struct V** pl)
{
    for (int i = 0; i < q; i++) {
        int f;
        scanf("%d", &f);
        switch (f) {
        case 0:
            push_back(ps, pl);
            break;

        case 1:
            pop_back(pl);
            break;

        case 2:
            print(*ps);
            break;
        }
    }
}

void push_back(struct V** ps, struct V** pl)
{
    int x;

    scanf("%d", &x);
    if (*ps == NULL) {
        *ps = *pl = (struct V*)malloc(sizeof(struct V));
        (*ps)->p = NULL;
        (*ps)->n = NULL;
    }
    else {
        (*pl)->n = (struct V*)malloc(sizeof(struct V));
        (*pl)->n->p = *pl;
        (*pl)->n->n = NULL;
        (*pl) = (*pl)->n;
    }

    (*pl)->v = x;
}

void pop_back(struct V** pl)
{
    struct V* p = (*pl)->p;

    p->n = NULL;
    free(*pl);
    (*pl) = p;
}

void print(struct V* s)
{
    struct V* c = s;

    while (c != NULL) {
        printf("%d", c->v);
        if (c->n != NULL) {
            printf(" ");
        }
        c = c->n;
    }
    
    printf("\n");
}

void dispose(struct V** ps, struct V** pl)
{
    struct V* c = *pl;

    while (c != NULL) {
        struct V* p = c->p;
        free(c);
        c = p;
    }

    *ps = NULL;
    *pl = NULL;
}