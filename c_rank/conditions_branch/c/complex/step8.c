#include <stdio.h>
#include <stdbool.h>

bool just(int h, int w);

int main()
{
    int h, w;
    
    scanf("%d %d", &h, &w);
    printf("%s\n", just(h, w) ? "YES" : "NO");
    return 0;
}

bool just(int h, int w)
{
    return (h > 0 && h % 2 == 0) && (w > 0 && w % 2 == 0);
}