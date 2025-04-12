#include <stdio.h>
#include <string.h>

int main()
{
    char s[102], c;
    int i;
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%d %c", &i, &c);
    s[i - 1] = c;
    printf("%s\n", s);
    return 0;
}