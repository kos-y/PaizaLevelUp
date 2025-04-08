#include <stdio.h>
#include <string.h>

#define COUNT 10
#define LEN (1000 * COUNT + COUNT - 1)

int main()
{
    char s[LEN + 1];
    fgets(s, sizeof(s), stdin);

    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}