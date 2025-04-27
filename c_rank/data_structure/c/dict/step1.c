// Paiza 問題集 データセット選択メニュー 数値の出現率 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CN 10

int main()
{
    int n;
    char c[CN];

    scanf("%d", &n);
    memset(c, 0, sizeof(c));
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        c[a]++;
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