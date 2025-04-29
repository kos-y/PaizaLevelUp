// Paiza 問題集 二重ループメニュー スーパー鳩時計 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__cuckoo_clock
#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int h = 0; h <= 23; h++) {
        for (int m = 0; m <= 59; m++) {
            int v = h + m;

            if (v % 3 == 0) {
                printf("FIZZ");
            }

            if (v % 5 == 0) {
                printf("BUZZ");
            }

            printf("\n");
        }
    }
    
    return 0;
}
