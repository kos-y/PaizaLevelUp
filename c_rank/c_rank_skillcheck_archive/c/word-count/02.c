#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char n[1002];

    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = '\0';

    bool find = false;
    char* p = strtok(n, " ");
    while (p != NULL) {
        if (strcmp(p, "red") == 0) {
            find = true;
            break;
        }

        p = strtok(NULL, " ");
    }

    printf("%s\n", find ? "Yes" : "No");
    return 0;
}
