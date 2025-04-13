#include <stdio.h>
#include <stdlib.h>

void input(int* p, int c);
void output(int* p, int c);

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(sizeof(int) * n);
    input(a, n);
    output(a, n);
    printf("%d\n", m);
    free(a);
    return 0;
}

void input(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        scanf("%d", &p[i]);
    }
}

void output(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        printf("%d\n", p[i]);
    }
}
