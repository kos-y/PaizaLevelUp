#include <stdio.h>

int main()
{
    int a, b, i;
    
    scanf("%d %d", &a, &b);
    for (i = 0; a <= b; i++) {
        a += (int)(a * 0.1);
    }
    
    printf("%d\n", i);
    return 0;
}