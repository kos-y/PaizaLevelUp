// Paiza 問題集 二重ループメニュー 素数の個数 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__prime_number_easy
#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main()
{
    int n, p = 0;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (prime(i)) {
            p++;
        }
    }

    printf("%d\n", p);    
    return 0;
}

bool prime(int n)
{
    if (n % 2 == 0) {
        return false;
    }
    
    for (int i = 3; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}
