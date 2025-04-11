#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a;
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        if (i == m - 1) {
            a = t;
        }
    }

    printf("%d\n", a);
    return 0;
}