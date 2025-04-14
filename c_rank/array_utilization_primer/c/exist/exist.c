#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* input(int n);
bool exist(int* a, int n, int k);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* a = input(n);
    printf("%s\n", exist(a, n, k) ? "Yes" : "No");
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

bool exist(int* a, int n, int k)
{
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            return true;
        }
    }

    return false;
}
