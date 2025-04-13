#include <stdio.h>
#include <string.h>

int main()
{
    char s[55];
    int n;

    scanf("%d ", &n);
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    for (int i = 0; p != NULL; i++) {
        if (i == n - 1) {
            printf("%s\n", p);
            break;
        }
        p = strtok(NULL, " ");
    }

    return 0;

}