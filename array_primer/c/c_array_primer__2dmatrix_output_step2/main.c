#include <stdio.h>

#define H 2
#define W 6

int main()
{
    int n[H][W] = {
        {6, 5, 4, 3, 2, 1},
        {3, 1, 8, 8, 1, 3}
    };

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            printf("%d", n[i][j]);
            if (j < W - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
