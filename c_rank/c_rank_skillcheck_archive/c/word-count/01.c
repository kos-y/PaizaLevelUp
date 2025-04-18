#include <stdio.h>
#include <string.h>

#define N 1000

int main()
{
    char s[N + 2];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " " );
    }
    
    return 0;
}