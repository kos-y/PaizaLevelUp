// Paiza 問題集 Dランク・実力確認問題セット1 次のごはん C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__3
#include <stdio.h>

int main()
{
    int h, m;
    
    scanf("%d %d", &h, &m);
    if (h < 7) {
        printf("breakfast\n");
    } else if (h < 13) {
        printf("lunch\n");
    } else if (h < 19) {
        printf("dinner\n");
    } else {
        printf("breakfast\n");
    }

    return 0;
}