#include <stdio.h>

int main()
{
    int n, e = 0, o = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a % 2 == 0) {
            e++;
        }
        else {
            o++;
        }
    }
    printf("%d %d\n", e, o);
    return 0;
}