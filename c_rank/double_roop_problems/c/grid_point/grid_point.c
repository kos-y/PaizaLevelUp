#include <stdio.h>
#include <math.h>

int main()
{
    int m = 0;
    
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            if (x + y < 100 && (int)pow(x, 3) + (int)pow(y, 3) < 100000) {
                int t = x * y;
                if (t > m) {
                    m = t;
                }
            }
        }
    }
    
    printf("%d\n", m);
    return 0;
}
