#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int h = 0; h <= 23; h++) {
        for (int m = 0; m <= 59; m++) {
            int v = h + m;

            if (v % 3 == 0) {
                printf("FIZZ");
            }

            if (v % 5 == 0) {
                printf("BUZZ");
            }

            printf("\n");
        }
    }
    
    return 0;
}
