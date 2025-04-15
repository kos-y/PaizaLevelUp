#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int m[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &m[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int s[5];
        for (int j = 0; j < 5; j++) {
            scanf("%d", &s[j]);
        }
        
        int sc = 0;
        for (int j = 0; j < 5; j++) {
            sc += s[j] * m[j];
        }
        
        if (sc > sum) {
            sum = sc;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}