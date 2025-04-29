// Paiza 問題集 Cランク実力確認問題セット1 荷物検査 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/rank_test_problems_c_0001/rank_test_problems_c_0001__3
#include <stdio.h>

int main()
{
    int n, m, sum = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        sum += a;
    }

    printf("%s\n", sum <= m ? "OK" : "NG");
    return 0;
}