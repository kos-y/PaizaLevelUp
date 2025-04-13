#include <stdio.h>
#include <stdlib.h>

void input(int* p, int c);
int count(int* p, int m, int c);

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(sizeof(int) * n);
    input(a, n);
    printf("%d\n", count(a, m, n));
    free(a);
    return 0;
}

void input(int* p, int c)
{
    for (int i = 0; i < c; i++) {
        scanf("%d", &p[i]);
    }
}

int count(int* p, int m, int c)
{
    int a = 0;

    for (int i = 0; i < c; i++) {
        if (p[i] == m) {
            a++;
        }
    }

    return a;
}
