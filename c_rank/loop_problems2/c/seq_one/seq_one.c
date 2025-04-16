#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++) {
        int a;

        scanf("%d ", &a);
        if (a == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}