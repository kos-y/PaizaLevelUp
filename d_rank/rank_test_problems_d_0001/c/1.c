// Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
#include <stdio.h>

int main()
{
    int s, a, t;
    scanf("%d %d %d", &s, &a, &t);

    double ta = t * a;
    double sa = s * a;
    printf("%d\n", (int)((ta / sa) * 100.0));
    return 0;
}