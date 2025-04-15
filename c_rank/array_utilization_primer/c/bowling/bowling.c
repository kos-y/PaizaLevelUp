#include <stdio.h>

int main()
{
    int a[10];
    scanf("%d %d %d %d", &a[9], &a[8], &a[7], &a[6]);
    scanf("%d %d %d", &a[5], &a[4], &a[3]);
    scanf("%d %d", &a[2], &a[1]);
    scanf("%d", &a[0]);
    
    for (int i = 0; i < 10; i++) {
        if (a[i] != 0) {
            printf("%d\n", i + 1);
            break;
        }
    }
    
    int c = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] != 0) {
            c++;
        }
    }
    printf("%d\n", c);
    
    return 0;
}