#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    printf("%d %d\n", n, m);
    for (int i = 0; i < m; i++) {
        int w;
        
        scanf("%d", &w);
        printf("%d\n", w);
    }
    
    return 0;
}
