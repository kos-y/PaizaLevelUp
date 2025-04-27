// Paiza 問題集 データセット選択メニュー 文字列の配列 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__string_boss
#include <stdio.h>

int main()
{
    int h, w, r, c;
    char s[100][101];

    scanf("%d %d %d %d", &h, &w, &r, &c);
    for (int i = 0; i < h; i++) {
        scanf("%s", s[i]);
    }

    printf("%s\n", s[r - 1][c - 1] == '#' ? "Yes" : "No");
    return 0;
}
