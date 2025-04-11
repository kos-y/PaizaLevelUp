#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[101];
    
    scanf("%d ", &n);
    scanf("%s", s);
    
    int c[26];
    memset(c, 0, sizeof(c));
    for (int i = 0; s[i] != '\0'; i++) {
        c[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d", c[i]);
        if (i < 25) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}