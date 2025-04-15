#include <stdio.h>

int main()
{
    int n, k, t;
    
    scanf("%d %d %d", &n, &k, &t);
    printf("%s\n", k * t % n == 0 ? "YES" : "NO");
    return 0;
}
