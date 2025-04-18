#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[7];

        scanf("%s", s);
        printf("strike or ball\n");
    }

    return 0;
}