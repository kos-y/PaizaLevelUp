#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k[2];
    
    scanf("%d %d", &n, &m);
    scanf("%d %d", &k[0], &k[1]);
    for (int i = 0; i < m; i++) {
        int w;
        scanf("%d", &w);

        if (abs(k[0] - w) < abs(k[1] - w)) {
            printf("%d\n", k[0]);
        }
        else {
            printf("%d\n", k[1]);
        }
    }
    
    return 0;
}
