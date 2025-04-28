// Paiza 問題集 ループメニュー1 FizzBuzz C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__fizzbuzz
#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 1; i <= 100; i++) {
        bool fizzbuzz = false;

        if (i % 3 == 0) {
            printf("Fizz");
            fizzbuzz = true;
        }

        if (i % 5 == 0) {
            printf("Buzz");
            fizzbuzz = true;
        }

        if (!fizzbuzz) {
            printf("%d", i);
        }
        
        printf("\n");
    }

    return 0;
}