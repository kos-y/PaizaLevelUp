// Paiza 問題集 ループメニュー1 数列の中に何個ある? C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__seq_count
#include <stdio.h>

int main()
{
    int n, c = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == 1) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}