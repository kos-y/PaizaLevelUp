#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d ", &n);
    while (n % 2 == 0) {
        n /= 2;
        c++;
    }

    printf("%d\n", c);
    return 0;
}