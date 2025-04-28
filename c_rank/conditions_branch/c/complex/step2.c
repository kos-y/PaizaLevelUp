// Paiza 問題集 条件分岐メニュー 足したり引いたり C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__complex_step2
#include <stdio.h>

int main()
{
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);
    for (int i = 0; i < 4; i++) {
        int t = n;

        t += i < 2 ? a : -a;
        t += i % 2 ? b : -b;
        if (t == 0) {
            printf("YES\n");
            return 0;
        }
    }
    
    printf("NO\n");
    return 0;
}