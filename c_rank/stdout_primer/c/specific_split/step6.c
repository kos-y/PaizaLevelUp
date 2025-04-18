// Paiza 問題集 標準出力メニュー 大きな数値を 3 けたごとにカンマ区切りで出力 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step6
#include <stdio.h>
#include <string.h>

int main()
{
    char base[1024];
    scanf("%s", base);
    
    char s[2048] = "";
    int j = 0;
    for (int i = strlen(base) - 1, k = 0; i >= 0; i--, j++) {
        s[j] = base[i];
        if (++k == 3 && i > 0) {
            s[++j] = ',';
            k = 0;
        }
    }
    s[j] = '\0';

    for (int i = strlen(s) - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");
    return 0;
}