#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int w;

        scanf("%d", &w);
        printf("%s\n", w % n == 0 ? "Yes" : "No");
    }
    
    return 0;
}
