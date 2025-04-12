#include <stdio.h>
#include <string.h>

int main()
{
    int k, i = 0;
    char a[] = "1 3 5 4 6 2 1 7 1 5";

    scanf("%d", &k);
    char* p = strtok(a, " ");
    while (p != NULL) {
        if (++i == k) {
            printf("%s\n", p);
            break;
        }
        p = strtok(NULL, " ");
    }
    return 0;
}