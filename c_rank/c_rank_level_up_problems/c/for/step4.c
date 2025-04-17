#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, n;

    scanf("%d ", &m);
    char* c = (char*)calloc(m, sizeof(char));
    for (int i = 0; i < m; i++) {
        scanf("%c ", &c[i]);
    }
    
    scanf("%d ", &n);
    char** s = (char**)calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++) {
        s[i] = (char*)calloc(11, sizeof(char));
        scanf("%s ", s[i]);
    }
    
    for (int i = 0; i < m; i++) {
        char* p = NULL;

        for (int j = 0; j < n; j++) {
            p = strchr(s[j], c[i]);
            printf("%s\n", p != NULL ? "YES" : "NO");
        }
    }
    
    for (int i = 0; i < n; i++) {
        free(s[i]);
    }
    
    free(s);
    free(c);
    return 0;
}
