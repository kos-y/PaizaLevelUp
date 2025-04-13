#include <stdio.h>

void loop(int s, int e);

int main()
{
    int n;

    scanf("%d", &n);
    loop(1, n / 2);
    loop((n / 2) + 1, n);
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