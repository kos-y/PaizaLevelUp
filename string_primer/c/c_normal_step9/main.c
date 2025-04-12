#include <stdio.h>
#include <string.h>

#define LEN 100

int main()
{
    char s[LEN + 2], t[LEN + 2];
    
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    printf(strstr(s, t) != NULL ? "YES" : "NO");
    return 0;
}