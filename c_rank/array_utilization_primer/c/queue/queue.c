#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Q {
    int v;
    struct Q* prev;
    struct Q* next;
};

void enqueue(int v);
void dequeue();

struct Q* p_start = NULL;
struct Q* p_last = NULL;

int main()
{
    int n;
    scanf("%d ", &n);
    
    for (int i = 0; i < n; i++) {
        char a[32];
        fgets(a, sizeof(a), stdin);
        
        char* p = strtok(a, " ");
        if (strcmp(p, "in") == 0) {
            p = strtok(NULL, " ");
            enqueue(atoi(p));
        }
        else {
            dequeue();
        }
    }
    
    struct Q* p_current = p_start;
    while (p_current != NULL) {
        printf("%d\n", p_current->v);
        p_current = p_current->next;
    }
    
    p_current = p_start;
    while (p_current != NULL) {
        struct Q* p = p_current->next;
        free(p_current);
        p_current = p;
    }
    
    return 0;
}

void enqueue(int v)
{
    if (p_start == NULL) {
        p_start = (struct Q*)calloc(1, sizeof(struct Q));
        p_start->v = v;
        p_last = p_start;
    }
    else {
        p_last->next = (struct Q*)calloc(1, sizeof(struct Q));
        p_last->next->v = v;
        p_last->next->prev = p_last;
        p_last = p_last->next;
    }
}

void dequeue()
{
    if (p_start != NULL) {
        struct Q* p = p_start->next;
        free(p_start);
        if (p != NULL) {
            p->prev = NULL;
        }
        p_start = p;
    }
}