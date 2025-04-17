#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[6], a[2];

    fgets(s, sizeof(s), stdin);
    char* p = strtok(s, ":");
    for (int i = 0; i < 2; i++) {
        a[i] = atoi(p);
        p = strtok(NULL, ":");
    }
    
    a[1] += 30;
    if (a[1] > 59) {
        a[0]++;
        a[1] -= 60;
    }

    printf("%02d:%02d\n", a[0], a[1]);
    return 0;
}
