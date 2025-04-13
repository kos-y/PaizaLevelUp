#include <stdio.h>
#include <stdbool.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main()
{
    int a[] = {5, 12, 6, 84, 14, 25, 44, 3, 7, 20};
    int n;
    bool find = false;

    scanf("%d", &n);
    for (int i = 0; i < NELEMS(a); i++) {
        if (a[i] == n) {
            find = true;
            break;
        }
    }

    printf("%s\n", find ? "Yes" : "No");
    return 0;
}