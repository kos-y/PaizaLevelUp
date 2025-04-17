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

    scanf("%d ", &n);
    struct H* h = (struct H*)calloc(n, sizeof(struct H));
    for (int i = 0; i < n; i++) {
        scanf("%s ", h[i].s);
    }
    
    int m;
    scanf("%d ", &m);
    for (int i = 0; i < m; i++) {
        char s[11];
        int a;

        scanf("%s %d ", s, &a);
        for (int j = 0; j < n; j++) {
            if (strcmp(h[j].s, s) == 0) {
                h[j].a += a;
            }
        }
    }
    
    char s[11];
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