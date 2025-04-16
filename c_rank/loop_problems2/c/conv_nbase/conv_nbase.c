#include <stdio.h>

int main()
{
    int n, m, b = 0, k = 1;

    scanf("%d %d", &n, &m);
    while (n > 0) {
        b += (n % m) * k;
        n /= m;
        k *= 10;
    }
    
    printf("%d\n", b);
    
    return 0;
}
