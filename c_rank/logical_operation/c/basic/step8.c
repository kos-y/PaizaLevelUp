#include <stdio.h>

void add_half(int a, int b, int* c, int* s);

int main()
{
    int a, b, c, s;
    
    scanf("%d %d", &a, &b);
    add_half(a, b, &c, &s);
    printf("%d %d\n", c, s);
    return 0;
}

void add_half(int a, int b, int* c, int* s)
{
    *c = a & b;
    *s = a ^ b;
}
