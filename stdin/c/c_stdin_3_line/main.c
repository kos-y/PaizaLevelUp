#include <stdio.h>
#define LINE_COUNT 3

int main()
{
    char lines[LINE_COUNT][101];

    // 入力
    for (int i = 0; i < LINE_COUNT; i++)
    {
        fgets(lines[i], sizeof(lines[i]), stdin);
    }

    // 出力
    for (int i = 0; i < LINE_COUNT; i++)
    {
        // fgetsは改行コードも含まれているためそのまま出力
        printf("%s", lines[i]);
    }

    return 0;
}