#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int sum = s[0] - '0';
    char o = s[1];
    for (int i = 2; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            int n = s[i] - '0';
            switch (o) {
                case '+':
                    sum += n;
                    break;
                case '-':
                    sum -= n;
                    break;
            }
        }
        else {
            o = s[i];
        }
    }
    
    printf("%d\n", sum);
    return 0;
}