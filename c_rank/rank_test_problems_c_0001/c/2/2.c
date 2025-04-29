// Paiza 問題集 Cランク実力確認問題セット1 電話番号 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_c_0001/rank_test_problems_c_0001__2
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    if (n < 2) {
        printf("clear\n");
    } else if (n < 9) {
        printf("sunny\n");
    } else {
        printf("cloudy\n");
    }

    return 0;
}