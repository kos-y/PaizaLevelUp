#include <stdio.h>

int main()
{
    int n, s = 0, i;
    
    scanf("%d", &n);
    for (i = 5; i <= n; i *= 5) {
        s += n / i;
    }
    
    printf("%d\n", s);
    return 0;
}
