#include <stdio.h>

int main()
{
    int n, k, s = 0;
    
    scanf("%d %d", &n, &k);
    while (n < k) {
        n *= 2;
        s++;
    }
    printf("%d\n", s);
    return 0;
}