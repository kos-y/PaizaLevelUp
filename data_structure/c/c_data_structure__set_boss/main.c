#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct V {
    char v[11];
    struct V* next;
};

void input(int n, int* p_total_n, struct V** pps);
bool find(struct V* p_start, char* v);
int sort(const void* x, const void* y);

int main()
{
    int n;
    scanf("%d ", &n);
    
    int total_n = 0;
    struct V* ps = NULL;
    input(n, &total_n, &ps);
    input(n, &total_n, &ps);
    
    int64_t* pa = (int64_t*)calloc(total_n, sizeof(int64_t));
    struct V* p = ps;
    for (int i = 0; i < total_n; i++, p = p->next) {
        pa[i] = strtoll(p->v, NULL, 10);
    }
    
    qsort(pa, total_n, sizeof(int64_t), sort);
    for (int i = 0; i < total_n; i++) {
        printf("%ld", pa[i]);
        if (i < total_n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    free(pa);
    p = ps;
    while (p != NULL) {
        struct V* p2 = p->next;
        free(p);
        p = p2;
    }
    
    return 0;
}

void input(int n, int* p_total_n, struct V** pps)
{
    static struct V* p = NULL;
    
    char a[1100];
    fgets(a, sizeof(a), stdin);
    
    char* pa = strtok(a, " ");
    while (pa != NULL) {
        char v[12];
        strcpy(v, pa);
        char* vp = strchr(v, '\n');
        if (vp != NULL) {
            *vp = '\0';
        }
        
        if (*pps == NULL) {
            (*pps) = (struct V*)calloc(1, sizeof(struct V));
            strcpy((*pps)->v, v);
            p = *pps;
            (*p_total_n)++;
        }
        else if (!find(*pps, v)) {
            p->next = (struct V*)calloc(1, sizeof(struct V));
            strcpy(p->next->v, v);
            p = p->next;
            (*p_total_n)++;
        }
        
        pa = strtok(NULL, " ");
    }
}

bool find(struct V* ps, char* v)
{
    struct V* p = ps;
    while (p != NULL) {
        if (strcmp(p->v, v) == 0) {
            return true;
        }
        
        p = p->next;
    }
    return false;
}

int sort(const void* x, const void* y) {
    int64_t a = *(int64_t*)x;
    int64_t b = *(int64_t*)y;
    
    if (a == b) {
        return 0;
    }
    else if (a < b) {
        return -1;
    }
    else {
        return 1;
    }
}
