#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char* s);

int main()
{
    char s[1002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf(ispalindrome(s) ? "YES\n" : "NO\n");
    return 0;
}

bool ispalindrome(char* s)
{
    int l = strlen(s);

    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) {
            return false;
        }
    }

    return true;
}