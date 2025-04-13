#include <stdio.h>

int main()
{
    char* s[] = {"good", "morning", "paiza", "813", "pa13"};
    int n;

    scanf("%d ", &n);
    printf("%s\n", s[n - 1]);
    return 0;
}