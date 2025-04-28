// Paiza 問題集 ループメニュー1 ある数をある回数表示 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__rep_num_step2
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        printf("%d\n", n);
    }
    
    return 0;
}