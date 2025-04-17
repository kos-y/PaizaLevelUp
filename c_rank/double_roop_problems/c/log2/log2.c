#include <stdio.h>

int main()
{
    int n, c = 0;
    
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        int d = i;

        while (d % 2 == 0) {
            d /= 2;
            c++;
        }

    }
    printf("%d\n", c);    
    return 0;
}
