#include <stdio.h>

int main()
{
    char s[10002];
    int i, j;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%d %d", &i, &j);
    for (i--, j--; i <= j; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}