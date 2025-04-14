#include <stdio.h>

void swap(int* pa, int* pb);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

void swap(int* pa, int* pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
