// Paiza 問題集 崖に落ちるか判定 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__complex_step7
#include <stdio.h>

int main()
{
    int n, k, t;
    
    scanf("%d %d %d", &n, &k, &t);
    printf("%s\n", n * k <= t ? "YES" : "NO");
    return 0;
}