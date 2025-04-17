#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = INT_MIN;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (m < a) {
            m = a;
        }
    }

    printf("%d\n", m);
    return 0;
}
