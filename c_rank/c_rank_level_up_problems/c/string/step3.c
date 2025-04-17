#include <stdio.h>

int todigit(char c);

int main()
{
    char s[5];
    
    scanf("%s", s);
    int a = (todigit(s[0])) + (todigit(s[3]));
    int b = (todigit(s[1])) + (todigit(s[2]));
    printf("%d%d\n", a, b);
    return 0;
}

int todigit(char c)
{
    return c - '0';
}