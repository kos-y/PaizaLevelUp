#include <stdio.h>
#include <string.h>

int main()
{
    char line[303];
    
    // 入力
    fgets(line, sizeof(line), stdin);

    // カンマ区切りで文字列を取得して出力
    char* p_token = strtok(line, ",");
    while (p_token != NULL) {
        printf("%s\n", p_token);
        p_token = strtok(NULL, ",");
    }

    return 0;
}