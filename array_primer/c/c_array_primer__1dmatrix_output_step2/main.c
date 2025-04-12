#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "5 1 3 4 5 12 6 8 1 3";
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    return 0;
}