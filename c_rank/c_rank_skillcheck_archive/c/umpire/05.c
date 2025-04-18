#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[7];

        scanf("%s", s);
        if (strcmp(s, "strike") == 0) {
            printf("%s!\n", s);
        }
        else {
            printf("%s\n", s);
        }
    }

    return 0;
}