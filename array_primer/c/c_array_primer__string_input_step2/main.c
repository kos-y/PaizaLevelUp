#include <stdio.h>
#include <string.h>

int main()
{
    char s[111];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL,  " ");
    }

    return 0;
}