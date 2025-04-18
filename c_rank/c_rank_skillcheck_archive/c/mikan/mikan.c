#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        int t = (w + (n / 2)) / n;
        int r = n * t;
        int a = n;
        if (a < r) {
            a = r;
        }
        
        printf("%d\n", a);
    }
    
    return 0;
}
