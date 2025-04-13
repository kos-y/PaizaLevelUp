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
    char* p = strtok(ca, " ");
    while (p != NULL) {
        int a = atoi(p);
        if (a >= 5) {
            printf("%d\n", a);
        }
        p = strtok(NULL, " ");
    }

    return 0;
}