// Paiza 問題集 文字列処理メニュー 表記の訂正 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step7
#include <stdio.h>
#include <string.h>

int count_period(char* s);

int main()
{
    char s[10001];
    
    scanf("%s", s);
    int i;
    for (i = 0; s[i] == '0'; i++);
    if (s[i] == '.') {
        i--;
    }
    strcpy(s, &s[i]);
    
    char* pdot = strchr(s, '.');
    if (pdot != NULL) {
        if (strchr(pdot, '0') != NULL) {
            for (i = strlen(s) - 1; s[i] == '0' && &s[i] != pdot; i--);
            s[i + 1] = '\0';
        }

        while (count_period(s) >= 2) {
            for (i = strlen(s) - 1; s[i] != '.'; i--);
            int j;
            for (j = i + 1; s[j] != '.' && s[j] != '\0'; j++) {
                s[j - 1] = s[j];
            }
            s[j - 1] = s[j];
        }
    }
    
    printf("%s\n", s);
    return 0;
}

int count_period(char* s)
{
    int n = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '.') {
            n++;
        }
    }
    
    return n;
}