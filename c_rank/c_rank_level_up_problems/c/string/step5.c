#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[6];

    fgets(s, sizeof(s), stdin);    
    char* p = strtok(s, ":");
    while (p != NULL) {
        printf("%d\n", atoi(p));
        p = strtok(NULL, ":");
    }
    
    return 0;
}
