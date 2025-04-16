#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = INT_MIN;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        int a;

        scanf("%d ", &a);
        if (m < a + i) {
            m = a + i;
        }
    }

    printf("%d\n", m);
    return 0;
}