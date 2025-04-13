#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, m;
    bool find = false;

    scanf("%d %d", &n, &m);

    int* a = (int)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == m) {
            find = true;
            break;
        }
    }
    
    printf("%s\n", find ? "Yes" : "No");
    free(a);
    return 0;
}