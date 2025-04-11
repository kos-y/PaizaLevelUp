#include <stdio.h>
#include <limits.h>
#define N 3

int main()
{
    int vs[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vs[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < N; i++) {
        if (vs[i] < min) {
            min = vs[i];
        }
        if (max < vs[i]) {
            max = vs[i];
        }
    }

    printf("%d\n", max - min);
    return 0;
}