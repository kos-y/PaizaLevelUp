#include <stdio.h>

int main()
{
    int n, b = 0, k = 1;

    scanf("%d", &n);
    while (n > 0) {
        b += (n % 2) * k;
        n /= 2;
        k *= 10;
    }
    
    printf("%d\n", b);
    return 0;
}
