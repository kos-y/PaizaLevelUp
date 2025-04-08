#include <stdio.h>
#include <string.h>

int main()
{
    char n[1024];
    scanf("%s", n);
    
    char s[2048] = "";
    int j = 0;
    for (int i = strlen(n) - 1, k = 0; i >= 0; i--, j++) {
        s[j] = n[i];
        k++;
        if (k == 3 && i > 0) {
            s[++j] = ',';
            k = 0;
        }
    }
    s[j] = '\0';

    for (int i = strlen(s) - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}