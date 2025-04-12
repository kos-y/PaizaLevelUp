#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "5 1 3 4 5 12 6 8 1 3";
    int i = 0;

    char* p = strtok(s, " ");
    while (p != NULL) {
        if (++i == 4) {
            printf("%s\n", p);
        }
        p = strtok(NULL, " ");
    }
    return 0;
}