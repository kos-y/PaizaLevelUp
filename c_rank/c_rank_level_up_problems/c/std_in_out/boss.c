#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char s[11];
        int a;
        
        scanf("%s %d ", s, &a);
        printf("%s %d\n", s, a + 1);
    }
    
    return 0;
}
