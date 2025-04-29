// Paiza 問題集 Cランク・スキルチェック見本問題セット Fizz Buzz C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_sample/fizz-buzz
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("Fizz Buzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}