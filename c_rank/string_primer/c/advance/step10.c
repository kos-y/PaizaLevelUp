// Paiza 問題集 文字列処理メニュー 巨大な数の足し算(繰り上がりなし) C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step10
#include <stdio.h>
#include <string.h>
#define N 1000

int main()
{
    char s[N + 2], t[N + 2], a[N];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    memset(a, 0, sizeof(a));
    for (int i = 0; s[i] != '\0'; i++) {
        a[i] = (s[i] - '0') + (t[i] - '0') + '0';
    }

    printf("%s\n", a);
    return 0;
}