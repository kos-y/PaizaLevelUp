#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    
    int c = 0, p = 1, k = 1;
    while (k <= n) {
        k += p * a;
        p += k % b;
        c++;
    }
    
    printf("%d\n", c);
    return 0;
}
