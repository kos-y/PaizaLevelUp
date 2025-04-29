// Paiza 問題集 ループメニュー1 カウント変数を使った計算 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__index_multi
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int m;

        scanf("%d", &m);
        printf("%d\n", m * i);
    }

    return 0;
}