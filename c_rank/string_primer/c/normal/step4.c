#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%d\n", atoi(s) - 813);
    return 0;
}
