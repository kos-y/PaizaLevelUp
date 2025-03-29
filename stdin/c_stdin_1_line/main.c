#include <stdio.h>

int main()
{
    char line[101];

    fgets(line, sizeof(line), stdin);
    printf("%s\n", line);

    return 0;
}