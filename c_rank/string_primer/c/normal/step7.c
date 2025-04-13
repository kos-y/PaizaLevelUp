#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strtoupper(char* s);

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strtoupper(s);
    printf("%s\n", s);
    return 0;
}

void strtoupper(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}