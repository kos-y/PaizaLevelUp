#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d ", &a);
        if (a % 3 == 0) {
            c++;
        }
    }
    
    printf("%d\n", c);    
    return 0;
}
