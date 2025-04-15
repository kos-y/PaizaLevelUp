#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    for (int i = 0; i < 4; i++) {
        int t = n;
        if (i < 2) {
            t += a;
        }
        else {
            t -= a;
        }
        if (i % 2 == 0) {
            t += b;
        }
        else {
            t -= b;
        }
        
        if (t == 0) {
            printf("YES\n");
            return 0;
        }
    }
    
    printf("NO\n");
    return 0;
}
