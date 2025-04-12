#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10000

int main()
{
    int n;
    scanf("%d ", &n);

    char** pps = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        pps[i] = (char*)calloc(LEN + 2, sizeof(char));
        fgets(pps[i], LEN + 2, stdin);
        pps[i][strcspn(pps[i], "\n")] = '\0';
    }

    for (int i = 0; i < n; i++) {
        printf("%s", pps[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        free(pps[i]);
    }
    free(pps);
    return 0;
}