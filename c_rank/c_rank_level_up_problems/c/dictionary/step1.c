#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct H {
    char s[11];
    int a;
};

int main()
{
    int n;
    char s[11];

    scanf("%d ", &n);    
    struct H* h = (struct H*)calloc(n, sizeof(struct H));
    for (int i = 0; i < n; i++) {
        scanf("%s %d ", h[i].s, &h[i].a);
    }
    
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (strcmp(h[i].s, s) == 0) {
            printf("%d\n", h[i].a);
            break;
        }
    }
    
    free(h);
    return 0;
}
