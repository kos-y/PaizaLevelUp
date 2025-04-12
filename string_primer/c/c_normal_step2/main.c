#include <stdio.h>
#include <string.h>

#define LEN 10000

int main()
{
    char s[LEN + 2], t[LEN + 2];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    
    int n;
    scanf("%d", &n);
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    printf("%s", t);
    for (; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}