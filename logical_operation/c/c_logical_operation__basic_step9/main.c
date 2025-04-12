#include <stdio.h>

void add_half(int a, int b, int* c, int* s);

int main()
{
    int a, b, c1;
    scanf("%d %d %d", &a, &b, &c1);
    
    int cx, sy;
    add_half(a, b, &cx, &sy);
    
    int cy, s;
    add_half(sy, c1, &cy, &s);
    
    int c2 = cx ^ cy;
    printf("%d %d\n", c2, s);
    
    return 0;
}

void add_half(int a, int b, int* c, int* s)
{
    *c = a & b;
    *s = a ^ b;
}