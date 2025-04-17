#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool s = false;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == 7) {
            s = true;
        }
    }

    printf("%s\n", s ? "YES" : "NO");
    return 0;
}
