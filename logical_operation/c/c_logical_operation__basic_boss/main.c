#include <stdio.h>

int not(int x);

int main()
{
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", not((not(a) & not(b)) | not(c)) ^ d);
    
    return 0;
}

int not(int x)
{
    return (~x) & 0x0001;
}