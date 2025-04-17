#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;

    scanf("%d %d %d ", &n, &m, &k);
    int* c = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            
            scanf("%d ", &a);
            if (a == k) {
                c[i]++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", c[i]);
    }
    
    free(c);
    return 0;
}
