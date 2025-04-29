// Paiza 問題集 ループメニュー1 奇数だけ出力 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__even_output
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a % 2 != 0) {
            printf("%d\n", a);
        }
    }

    return 0;
}