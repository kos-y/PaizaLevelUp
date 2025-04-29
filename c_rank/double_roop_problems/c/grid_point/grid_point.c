// Paiza 問題集 二重ループメニュー 格子点 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__grid_point
#include <stdio.h>
#include <math.h>

int main()
{
    int m = 0;
    
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            if (x + y < 100 && (int)pow(x, 3) + (int)pow(y, 3) < 100000) {
                int t = x * y;
                if (t > m) {
                    m = t;
                }
            }
        }
    }
    
    printf("%d\n", m);
    return 0;
}
