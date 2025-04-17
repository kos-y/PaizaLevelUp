#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= b; c++) {
                if (a + b + c == n) {
                    int pa = (int)pow(a, 2);
                    int pb = (int)pow(b, 2);
                    int pc = (int)pow(c, 2);
                    if (pa == pb + pc) {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }
    
    printf("NO\n");
    return 0;
}
