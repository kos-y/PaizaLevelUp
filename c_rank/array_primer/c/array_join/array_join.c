#include <stdio.h>
#include <stdlib.h>

void input(int** p, int c);
void output(int* p, int c);

int main()
{
    int n, m, *a, *b;

    scanf("%d %d", &n, &m);
    input(&a, n);
    input(&b, m);
    output(a, n);
    output(b, m);
    free(a);
    free(b);
    return 0;
}

void input(int** p, int c)
{
    *p = (int*)malloc(sizeof(int) * c);

    for (int i = 0; i < c; i++) {
        scanf("%d", &(*p)[i]);
    }
}

void output(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        printf("%d\n", p[i]);
    }
}
