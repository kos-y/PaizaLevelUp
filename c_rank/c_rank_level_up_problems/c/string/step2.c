#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a;
    char s[11];

    scanf("%c", &a);
    scanf("%10s", s);
    bool find = false;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == a) {
            find = true;
            break;
        }
    }

    printf("%s\n", find ? "YES" : "NO");
    return 0;
}