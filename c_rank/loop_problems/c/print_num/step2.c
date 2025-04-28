// Paiza 問題集 ループメニュー1 ある数字までの出力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__print_num_step2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}