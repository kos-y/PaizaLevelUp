#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char ca[1011];

    scanf("%d ", &n);    
    fgets(ca, sizeof(ca), stdin);
    ca[strcspn(ca, "\n")] = '\0';
    int* a = (int*)calloc(n, sizeof(int));
    char* p = strtok(ca, " ");
    int sum = 0;
    for (int i = 0; p != NULL; i++) {
        a[i] = atoi(p);
        sum += a[i];
        p = strtok(NULL, " ");
    }
    
    double ave = (double)sum / (double)n;
    for (int i = 0; i < n; i++) {
        if ((double)a[i] >= ave) {
            printf("%d\n", a[i]);
        }
    }

    free(a);
    return 0;
}