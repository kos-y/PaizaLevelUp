// Paiza 問題集 Cランクレベルアップメニュー 辞書の基本 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_level_up_problems/c_rank_dictionary_step1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct H {
    char s[11];
    int a;
};

int main()
{
    int n;
    char s[11];

    scanf("%d ", &n);    
    struct H* h = (struct H*)calloc(n, sizeof(struct H));
    for (int i = 0; i < n; i++) {
        scanf("%s %d ", h[i].s, &h[i].a);
    }
    
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (strcmp(h[i].s, s) == 0) {
            printf("%d\n", h[i].a);
            break;
        }
    }
    
    free(h);
    return 0;
}
