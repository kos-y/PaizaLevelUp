#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 6

int main()
{
    int n;

    scanf("%d", &n);
    char** ppa = (char**)calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++) {
        ppa[i] = (char*)calloc(LEN, sizeof(char));
        scanf("%5s", ppa[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%lu\n", strlen(ppa[i]));
    }

    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }

    free(ppa);
    return 0;
}
