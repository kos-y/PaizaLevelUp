#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", (int)pow(2, i));
    }

    return 0;
}