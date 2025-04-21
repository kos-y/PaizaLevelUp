// Paiza 問題集 組になったデータの入力】文字列と整数の組からの選択 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_boss
#include <stdio.h>

#define LEN 10

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        char s[LEN + 1];
        int a;

        scanf("%s %d", s, &a);
        if (i == 8) {
            printf("%s %d\n", s, a);
        }
    }

    return 0;
}