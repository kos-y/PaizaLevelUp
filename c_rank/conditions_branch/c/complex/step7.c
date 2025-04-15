#include <stdio.h>

int main()
{
    int n, k, t;
    
    scanf("%d %d %d", &n, &k, &t);
    printf("%s\n", n * k <= t ? "YES" : "NO");
    return 0;
}