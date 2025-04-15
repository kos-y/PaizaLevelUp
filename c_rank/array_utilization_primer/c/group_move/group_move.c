#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* p, int a, int b);
void resize(int** p, int* n, int c);
void reverse(int* p, int n);

int main()
{
    int n, q;
    scanf("%d %d ", &n, &q);
    
    int* s = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        s[i] = i + 1;
    }
    
    for (int i = 0; i < q; i++) {
        char c[32];
        fgets(c, sizeof(c), stdin);
        
        char* p = strtok(c, " ");
        if (strcmp(p, "swap") == 0) {
            int a = atoi(strtok(NULL, " ")) - 1;
            int b = atoi(strtok(NULL, " ")) - 1;
            swap(s, a, b);
        }
        else if (strcmp(p, "resize") == 0) {
            resize(&s, &n, atoi(strtok(NULL, " ")));
        }
        else {
            reverse(s, n);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", s[i]);
    }
 
    free(s);   
    return 0;
}

void swap(int* p, int a, int b)
{
    int t = p[a];
    p[a] = p[b];
    p[b] = t;
}

void resize(int** p, int* n, int c)
{
    if (*n > c) {
        int* p2 = (int*)malloc(sizeof(int) * *n);
        for (int i = 0; i < *n; i++) {
            p2[i] = (*p)[i];
        }
        
        free(*p);
        *p = (int*)malloc(sizeof(int) * c);
        for (int i = 0; i < c; i++) {
            (*p)[i] = p2[i];
        }
        
        free(p2);
        *n = c;
    }
}

void reverse(int* p, int n)
{
    for (int i = 0, j = n - 1; i < n && i < j; i++, j--) {
        swap(p, i, j);
    }
}