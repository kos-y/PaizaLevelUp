#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "5 1 3 4 5 12 6 8 1 3";
    int c = 0;

    char* p = strtok(s, " ");
    while (p != NULL) {
        c++;
        p = strtok(NULL, " ");
    }

    printf("%d\n", c);
    return 0;
}