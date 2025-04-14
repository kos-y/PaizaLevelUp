#include <stdio.h>
#include <stdlib.h>

int* input(int n);
void mapadd(int* a, int n, int k);
void output(int* a, int n);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* a = input(n);
    mapadd(a, n, k);
    output(a, n);
    free(a);
    return 0;
}

int* input(int n)
{
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

void mapadd(int* a, int n, int k)
{
    for (int i = 0; i < n; i++) {
        a[i] += k;
    }
}

void output(int* a, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
