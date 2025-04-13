#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d ", &n);

    char ia[200];
    fgets(ia, sizeof(ia), stdin);
    
    int* pa = (int*)malloc(sizeof(int) * n);
    char* p = strtok(ia, " ");
    for (int i = 0; p != NULL; i++) {
        pa[i] = atoi(p);
        p = strtok(NULL, " ");
    }
    
    int c[10];
    memset(c, 0, sizeof(c));
    for (int i = 0; i < n; i++) {
        c[pa[i]]++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d", c[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    
    free(pa);
    return 0;
}