// Paiza 問題集 ループメニュー1 2 の累乗を表示 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__pow2
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", (int)pow(2, i));
    }

    return 0;
}