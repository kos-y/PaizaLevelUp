// Paiza 問題集 データセット選択メニュー 英小文字の出現率 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step2
#include <stdio.h>
#include <string.h>

#define CN 26
#define LEN 100

int main()
{
    int n;
    char s[LEN + 1], c[CN];
    
    scanf("%d ", &n);
    scanf("%s", s);
    memset(c, 0, sizeof(c));
    for (int i = 0; s[i] != '\0'; i++) {
        c[s[i] - 'a']++;
    }
    
    for (int i = 0; i < CN; i++) {
        printf("%d", c[i]);
        if (i < CN - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}