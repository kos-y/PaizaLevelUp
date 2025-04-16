#include <stdio.h>

int main()
{
    int n, m, c = 0;
    
    scanf("%d %d", &n, &m);
    while (n % m == 0) {
        n /= m;
        c++;
    }

    printf("%d\n", c);
    return 0;
}