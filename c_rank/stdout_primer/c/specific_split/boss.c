// Paiza 問題集 標準出力メニュー 【特定の文字で区切り 1 行で出力】大きな数値を 3 けたごとにカンマ区切りで出力 2 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_boss
#include <stdio.h>
#include <string.h>

int main()
{
    char n[1024];
    scanf("%s", n);
    
    char s[2048] = "";
    int j = 0;
    for (int i = strlen(n) - 1, k = 0; i >= 0; i--, j++) {
        s[j] = n[i];
        k++;
        if (k == 3 && i > 0) {
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