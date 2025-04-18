// Paiza 問題集 標準出力メニュー 複数の数値を半角スペース埋めで出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step3
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int m;

        scanf("%d", &m);
        printf("%3d\n", m);
    }

    return 0;
}