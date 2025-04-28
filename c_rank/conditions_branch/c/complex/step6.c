// Paiza 問題集 池の周回 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__complex_step6
#include <stdio.h>

int main()
{
    int n, k, t;
    
    scanf("%d %d %d", &n, &k, &t);
    printf("%s\n", k * t % n == 0 ? "YES" : "NO");
    return 0;
}
