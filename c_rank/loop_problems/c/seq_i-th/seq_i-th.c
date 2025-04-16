#include <stdio.h>

int main()
{
    int n, x = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (x == -1 && a == 1) {
            x = i + 1;
        }
    }

    printf("%d\n", x);
    return 0;
}