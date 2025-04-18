#include <stdio.h>
#include <stdlib.h>

#define W 1500

int main()
{
    int n, k, w;

    scanf("%d %d", &n, &k);
    scanf("%d", &w);

    for (int i = 1; i <= W; i++) {
        if (i % n != 0) {
            continue;
        }

        printf("%d %d\n", i, (int)abs(i - w));
    }

    return 0;
}
