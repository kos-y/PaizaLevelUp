// Paiza 問題集 Cランク・スキルチェック過去問題セット 野球の審判（力試し編） C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/umpire_01
#include <stdio.h>
#include <string.h>

int main()
{
    int n, s = 0, b = 0;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char c[7];

        scanf("%6s", c);
        if (strcmp(c, "strike") == 0) {
            printf("%s\n", ++s < 3 ? "strike!" : "out!");
        } else if (strcmp(c, "ball") == 0) {
            printf("%s\n", ++b < 4 ? "ball!" : "fourball!");
        }
    }
    
    return 0;
}