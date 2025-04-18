#include <stdio.h>
#include <string.h>

int main()
{
    int n, s = 0, b = 0;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char c[7];

        scanf("%s ", c);
        if (strcmp(c, "strike") == 0) {
            printf("%s\n", ++s < 3 ? "strike!" : "out!");
        }
        else if (strcmp(c, "ball") == 0) {
            printf("%s\n", ++b < 4 ? "ball!" : "fourball!");
        }
    }
    
    return 0;
}
