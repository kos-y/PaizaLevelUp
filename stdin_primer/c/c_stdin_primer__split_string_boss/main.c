#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "one two three four five";

    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}