#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "8 1 3 3 8 1 1 3 8 8";
    int i = 0;

    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    return 0;
}