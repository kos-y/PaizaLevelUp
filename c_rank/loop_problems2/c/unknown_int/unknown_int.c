// Paiza 問題集 ループメニュー1 未知数個の数の受け取り C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__unknown_int
#include <stdio.h>

int main()
{
    while (1) {
        int a;

        scanf("%d", &a);
        printf("%d\n", a);
        if (a == -1) {
            break;
        }
    }

    return 0;
}