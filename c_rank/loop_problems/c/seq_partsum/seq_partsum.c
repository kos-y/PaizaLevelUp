// Paiza 問題集 ループメニュー1 数列の A 番目から B 番目までの和 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_partsum
#include <stdio.h>

int main()
{
    int n, a, b, sum = 0;

    scanf("%d %d %d", &n, &a, &b);
    for (int i = 0; i < n; i++) {
        int v;

        scanf("%d", &v);
        if (a - 1 <= i && i < b) {
            sum += v;
        }
    }

    printf("%d\n", sum);
    return 0;
}