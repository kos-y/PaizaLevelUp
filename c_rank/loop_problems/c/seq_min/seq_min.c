// Paiza 問題集 ループメニュー1 数列の最小値 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_min
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = INT_MAX;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a = 0;

        scanf("%d", &a);
        if (m > a) {
            m = a;
        }
    }

    printf("%d\n", m);
   return 0;
}