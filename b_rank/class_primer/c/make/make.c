// Paiza 問題集 クラス・構造体メニュー 構造体の作成 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__make
#include <stdio.h>

struct U {
    char n[21], b[6], s[21];
    int o;
};

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct U u;

        scanf("%20s %d %5s %20s", u.n, &u.o, u.b, u.s);
        printf("User{\n");
        printf("nickname : %s\n", u.n);
        printf("old : %d\n", u.o);
        printf("birth : %s\n", u.b);
        printf("state : %s\n", u.s);
        printf("}\n");
    }

    return 0;
}