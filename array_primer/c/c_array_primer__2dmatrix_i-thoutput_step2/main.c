#include <stdio.h>
#define H 3
#define W 3

int main()
{
    int a[H][W];
    int k, l;

    scanf("%d %d", &k, &l);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", a[k - 1][l - 1]);
    return 0;
}