// Paiza 問題集 配列メニュー 文字列の配列の入力 3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_input_step3
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d ", &n);
    
    char s[111];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    
    return 0;
}