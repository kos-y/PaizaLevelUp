#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, l;
    char s[56];

    scanf("%d %d %d ", &n, &m, &l);
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    for (int i = 0; p != NULL; i++) {
        if (i == n - 1) {
            printf("%c\n", p[l - 1]);
            break;
        }
        p = strtok(NULL, " ");
    }
    return 0;
}
