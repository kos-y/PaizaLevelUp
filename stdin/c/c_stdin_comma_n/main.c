#include <stdio.h>
#include <string.h>

int main()
{
    int word_count;
    scanf("%d ", &word_count);

    char line[1011];
    fgets(line, sizeof(line), stdin);

    char* p_token = strtok(line, ",");
    while (p_token != NULL) {
        printf("%s\n", p_token);
        p_token = strtok(NULL, ",");
    }

    return 0;
}