#include <stdio.h>

int main()
{
    int h, w, r, c;
    scanf("%d %d %d %d", &h, &w, &r, &c);
    
    char s[100][101];
    for (int i = 0; i < h; i++) {
        scanf("%s", s[i]);
    }
    
    if (s[r - 1][c - 1] == '#') {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}
