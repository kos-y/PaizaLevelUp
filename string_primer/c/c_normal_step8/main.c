#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggle_upper_lower(char* s);

int main()
{
    char s[102];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    toggle_upper_lower(s);
    printf("%s\n", s);
    return 0;
}

void toggle_upper_lower(char* s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
        else {
            s[i] = toupper(s[i]);
        }
    }
}