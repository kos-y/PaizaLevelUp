#include <stdio.h>
#include <string.h>

void strrev(char* s);
void cswap(char* c1, char* c2);

int main()
{
    char s[1002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strrev(s);
    printf("%s\n", s);
    return 0;
}

void strrev(char* s)
{
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++) {
        cswap(&s[i], &s[l - i - 1]);
    }
}

void cswap(char* c1, char* c2)
{
    char c = *c1;
    *c1 = *c2;
    *c2 = c;
}
