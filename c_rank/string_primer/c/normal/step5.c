#include <stdio.h>

int main()
{
    long long x, y;
    int n;
    
    scanf("%lld", &x);
    scanf("%lld", &y);
    scanf("%d", &n);
    
    char s[14];
    snprintf(s, sizeof(s), "%lld", x + y);
    printf("%c\n", s[n - 1]);
    return 0;
}