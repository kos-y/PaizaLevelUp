#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;

    scanf("%d ", &n);    
    int* a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            printf("%d\n", i + 1);
            break;
        }
    }
    
    free(a);
    return 0;
}
