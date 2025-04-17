#include <stdio.h>

void shift_left(int* a);

int main()
{
    int h;
    scanf("%d", &h);
    
    int a[] = {0, 1, 1};
    int b[] = {0, 1, 1};
    
    int dmg = 2, i = 2;
    while (dmg < h) {
        shift_left(a);
        shift_left(b);
        
        a[2] = b[0] + b[1];
        b[2] = a[0] + 2 * a[1];
        
        dmg += b[2];
        i++;
    }
    
    printf("%d\n", i);
    return 0;
}

void shift_left(int* a)
{
    a[0] = a[1];
    a[1] = a[2];
}
