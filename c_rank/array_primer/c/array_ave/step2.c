#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k;
    char ca[1011];

    scanf("%d %d ", &n, &k);
    fgets(ca, sizeof(ca), stdin);
    ca[strcspn(ca, "\n")] = '\0';
    char* p = strtok(ca, " ");
    while (p != NULL) {
        int a = atoi(p);
        if (a >= k) {
            printf("%d\n", a);
        }
        p = strtok(NULL, " ");
    }
    return 0;
}