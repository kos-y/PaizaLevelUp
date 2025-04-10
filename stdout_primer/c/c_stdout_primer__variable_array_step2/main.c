#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    loop(1, n);
    loop(1, m);
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