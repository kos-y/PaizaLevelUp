#include <stdio.h>
#define N 10

int main()
{
    int k, a[N];

    scanf("%d", &k);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[k - 1]);
    return 0;
}