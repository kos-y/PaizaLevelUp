// Paiza 問題集 ループメニュー1 偶奇の判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems2/loop_problems2__even_odd
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        printf("%s\n", a % 2 == 0 ? "even" : "odd");
    }

    return 0;
}