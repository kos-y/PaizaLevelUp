#include <stdio.h>
#define LINE_COUNT 3

int main()
{
    char lines[LINE_COUNT][101];

    for (int i = 0; i < LINE_COUNT; i++)
    {
        fgets(lines[i], sizeof(lines[i]), stdin);
    }

    for (int i = 0; i < LINE_COUNT; i++)
    {
        printf("%s", lines[i]);
    }

    return 0;
}