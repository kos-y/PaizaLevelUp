#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char t[6];
        int h, m;

        scanf("%s %d %d ", t, &h, &m);        
        int th = atoi(strtok(t, ":"));
        int tm = atoi(strtok(NULL, ":"));
        
        m += tm;
        while (m >= 60) {
            h++;
            m -= 60;
        }
        
        h += th;
        while (h >= 24) {
            h -= 24;
        }
        
        printf("%02d:%02d\n", h, m);
    }
    
    return 0;
}
