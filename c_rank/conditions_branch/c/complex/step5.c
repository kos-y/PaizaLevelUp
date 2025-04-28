// Paiza 問題集 終了判定 2 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__complex_step5
#include <stdio.h>

int main()
{
    int n, k, s = 0;
    
    scanf("%d %d", &n, &k);
    while (n < k) {
        n *= 2;
        s++;
    }
    
    printf("%d\n", s);
    return 0;
}