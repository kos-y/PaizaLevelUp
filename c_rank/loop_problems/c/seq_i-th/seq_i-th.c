// Paiza 問題集 ループメニュー1 数列の何番目にある? C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_i-th
#include <stdio.h>

int main()
{
    int n, x = -1;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int a;

        scanf("%d", &a);
        if (x == -1 && a == 1) {
            x = i;
        }
    }

    printf("%d\n", x);
    return 0;
}