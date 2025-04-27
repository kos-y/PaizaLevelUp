// Paiza 問題集 文字列処理メニュー 巨大な数の足し算 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000

struct V {
    int v;
    struct V* prev;
    struct V* next;
};

void input(char* s, size_t sz);
int todigit(char c);
int add(char* s, char* t, struct V** pp_start, struct V** pp_last, struct V** pp);
void upcarry(int up, struct V** pp_start, struct V* p);
void print(struct V* p_start);
void dispose(struct V* p_start);

int main()
{
    char s[LEN + 2], t[LEN + 2];
    struct V* p_start = NULL;
    struct V* p_last = NULL;
    struct V* p = NULL;
    
    input(s, sizeof(s));
    input(t, sizeof(t));
    int up = add(s, t, &p_start, &p_last, &p);
    upcarry(up, &p_start, p);
    print(p_start);
    dispose(p_start);
    return 0;
}

void input(char* s, size_t sz)
{
    fgets(s, sz, stdin);
    s[strcspn(s, "\n")] = '\0';
}

int todigit(char c)
{
    return c - '0';
}

int add(char* s, char* t, struct V** pp_start, struct V** pp_last, struct V** pp)
{
    *pp_start = NULL;
    *pp_last = NULL;
    *pp = NULL;

    int up = 0;
    for (int i = strlen(s) - 1; i >= 0; i--) {
        int sv = todigit(s[i]);
        int tv = todigit(t[i]);
        
        int a = sv + tv + up;
        if (*pp_last == NULL) {
            *pp_last = (struct V*)calloc(1, sizeof(struct V));
            (*pp_last)->v = a % 10;
            up = a / 10;
            *pp_start = *pp;
            *pp = *pp_last;
        }
        else {
            (*pp)->prev = (struct V*)calloc(1, sizeof(struct V));
            (*pp)->prev->next = *pp;
            (*pp)->prev->v = a % 10;
            up = a / 10;
            *pp = (*pp)->prev;
            *pp_start = *pp;
        }
    }

    return up;
}

void upcarry(int up, struct V** pp_start, struct V* p)
{
    if (up > 0) {
        p->prev = (struct V*)calloc(1, sizeof(struct V));
        p->prev->next = p;
        p->prev->v = up;
        p = p->prev;
        *pp_start = p;
    }
}

void print(struct V* p_start)
{
    struct V* p = p_start;
    while (p != NULL) {
        printf("%d", p->v);
        p = p->next;
    }
    printf("\n");
}

void dispose(struct V* p_start)
{
    struct V* p = p_start;
    while (p != NULL) {
        struct V* p2 = p->next;
        free(p);
        p = p2;
    }
}