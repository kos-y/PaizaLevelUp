#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        printf("%d\n", n);
    }
    
    return 0;
}