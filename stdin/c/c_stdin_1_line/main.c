#include <stdio.h>

int main()
{
    char line[101];

    // 入力
    fgets(line, sizeof(line), stdin);

    // 出力
    // fgetsは改行コードも含まれている
    printf("%s", line);

    return 0;
}