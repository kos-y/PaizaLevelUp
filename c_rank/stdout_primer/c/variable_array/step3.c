#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        loop(1, i);
    }

    return 0;
}

void loop(int s, int e)
{
    for (int i = s; i <= e; i++) {
        printf("%d", i);
        if (i < e) {
            printf(" ");
        }
    }
    printf("\n");
}