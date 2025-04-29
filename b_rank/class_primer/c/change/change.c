// Paiza 問題集 クラス・構造体メニュー 構造体の更新 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__change
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct U {
    char n[21], b[6], s[21];
    int o;
};

void change_name(struct U* pu, char* n);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    struct U* pu = (struct U*)calloc(n, sizeof(struct U));
    for (int i = 0; i < n; i++) {
        scanf("%20s %d %5s %20s", pu[i].n, &pu[i].o, pu[i].b, pu[i].s);
    }

    for (int i = 0; i < k; i++) {
        int a;
        char nn[21];

        scanf("%d %20s", &a, nn);
        change_name(&pu[a - 1], nn);
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %s %s\n", pu[i].n, pu[i].o, pu[i].b, pu[i].s);
    }

    free(pu);
    return 0;
}

void change_name(struct U* pu, char* n)
{
    strcpy(pu->n, n);
}