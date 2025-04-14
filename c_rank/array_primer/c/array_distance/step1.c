#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d ", &n);
    
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d  %d ", &x, &y);
        printf("%d\n", abs(2 - x) + abs(3 - y));
    }
    
    return 0;
}