// Paiza 問題集 Dランクレベルアップメニュー FizzBuzz C編
// https://paiza.jp/works/mondai/d_rank_level_up_problems/d_rank_level_up_problems__loop_boss
#include <stdio.h>

#define FIZZ(n) ((n) % 3 == 0)
#define BUZZ(n) ((n) % 5 == 0)

int main()
{
    for (int i = 1; i <= 100; i++) {
        if (FIZZ(i) && BUZZ(i)) {
            printf("FizzBuzz\n");
        } else if (FIZZ(i)) {
            printf("Fizz\n");
        } else if (BUZZ(i)) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}