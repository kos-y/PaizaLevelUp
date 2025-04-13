#include <stdio.h>
#include <limits.h>

int main()
{
    int min_value = INT_MAX;

    for (int i = 0; i < 5; i++) {
        int n;
        scanf("%d ", &n);
        if (n < min_value) {
            min_value = n;
        }
    }

    printf("%d\n", min_value);
    return 0;
}