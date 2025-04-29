// Paiza 問題集 クラス・構造体メニュー 構造体の検索 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__find
#include <stdio.h>
#include <stdlib.h>

struct U {
    char n[21], b[6], s[21];
    int o;
};

int main()
{
    int n, k;

    scanf("%d", &n);
    struct U* pu = (struct U*)calloc(n, sizeof(struct U));
    for (int i = 0; i < n; i++) {
        scanf("%20s %d %5s %20s", pu[i].n, &pu[i].o, pu[i].b, pu[i].s);
    }

    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        if (pu[i].o == k) {
            printf("%s\n", pu[i].n);
        }
    }

    free(pu);
    return 0;
}