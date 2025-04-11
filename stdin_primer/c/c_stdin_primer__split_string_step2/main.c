#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "He likes paiza";

    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}