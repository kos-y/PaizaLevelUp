#include <stdio.h>
#include <string.h>

int main()
{
    // 文字列数の入力
    int word_count;
    scanf("%d ", &word_count);

    // 文字列の入力
    char line[1011];
    fgets(line, sizeof(line), stdin);

    // カンマ区切りで文字列を取得して出力
    char* p_token = strtok(line, ",");
    while (p_token != NULL) {
        printf("%s\n", p_token);
        p_token = strtok(NULL, ",");
    }

    return 0;
}