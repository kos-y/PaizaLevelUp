// Paiza 問題集 配列メニュー i 番目の出力 4 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_i-thinput_step4
#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, l;
    char s[56];

    scanf("%d %d %d ", &n, &m, &l);
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* p = strtok(s, " ");
    for (int i = 0; p != NULL; i++) {
        if (i == n - 1) {
            printf("%c\n", p[l - 1]);
            break;
        }
        
        p = strtok(NULL, " ");
    }
    return 0;
}
