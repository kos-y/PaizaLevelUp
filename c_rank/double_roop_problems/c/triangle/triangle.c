// Paiza 問題集 二重ループ：活用編 三角形の探索 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__triangle
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= b; c++) {
                if (a + b + c == n) {
                    if ((int)pow(a, 2) == (int)pow(b, 2) + (int)pow(c, 2)) {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }
    
    printf("NO\n");
    return 0;
}