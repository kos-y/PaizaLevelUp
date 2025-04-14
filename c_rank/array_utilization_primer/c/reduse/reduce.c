#include <stdio.h>
#include <stdlib.h>

int* input(int n);
void output(int* a, int n);

int main()
{
    int n;

    scanf("%d ", &n);
    int* a = input(n);
    output(a, n);
    free(a);    
    return 0;
}

int* input(int n)
{
    int* a = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

void output(int* a, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d\n", a[i] * a[j]);
        }
    }
}
