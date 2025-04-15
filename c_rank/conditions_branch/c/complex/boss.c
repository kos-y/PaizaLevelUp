#include <stdio.h>
#include <limits.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int m = INT_MAX;
    for (int i = a; i <= b; i++) {
        for (int j = a; j <= b; j++) {
            int ij = i * j;
            if (m > ij) {
                m = ij;
            }
        }
    }
    
    printf("%d\n", m);
    return 0;
}