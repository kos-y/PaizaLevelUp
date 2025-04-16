#include <stdio.h>

int main()
{
    int n, m, k, i;
    
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; n <= k; i++) {
        n += m;
    }
    
    printf("%d\n", i);
    return 0;
}