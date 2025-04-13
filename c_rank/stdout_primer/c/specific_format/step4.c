#include <stdio.h>
#define DATA_WIDTH 6
#define SPLIT_WIDTH 3

int main()
{
    int h, w, a, b;
    scanf("%d %d %d %d", &h, &w, &a, &b);
    
    int l = (w * DATA_WIDTH) + ((w - 1) * SPLIT_WIDTH);
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("(%d, %d)", a, b);
            if (j < w - 1) {
                printf(" | ");
            }
        }
        printf("\n");
        
        if (i < h - 1) {
            for (int j = 0; j < l; j++) {
                printf("=");
            }
            printf("\n");
        }
    }
    
    return 0;
}