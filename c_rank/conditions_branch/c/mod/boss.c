// Paiza 問題集 条件分岐メニュー FizzBuzz C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__mod_boss
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool f = false;

    scanf("%d", &n);
    if (n % 3 == 0) {
        printf("Fizz");
        f = true;
    }

    if (n % 5 == 0) {
        printf("Buzz");
        f = true;
    }

    if (!f) {
        printf("%d", n);
    }
    
    printf("\n");
    return 0;
}