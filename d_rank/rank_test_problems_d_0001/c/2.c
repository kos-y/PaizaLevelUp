// Paiza 問題集 Dランク・実力確認問題セット1 オリンピックのスコア C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__2
#include <stdio.h>
#include <limits.h>

int main()
{
    int s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &s[i]);
    }

    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (s[i] < min)  {
            min = s[i];
        }

        if (max < s[i]) {
            max = s[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i] != min && s[i] != max) {
            sum += s[i];
        }
    }

    printf("%d\n", sum);
    return 0;
}