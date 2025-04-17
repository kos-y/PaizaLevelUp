#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d", j);
            if (j < 5) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}