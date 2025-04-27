// Paiza 問題集 配列メニュー 二点間の距離 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_distance_step2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b;

    scanf("%d %d %d ", &n, &a, &b);
    int* x = (int*)calloc(n, sizeof(int));
    int* y = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    printf("%d", abs(x[a - 1] - x[b - 1]) + abs(y[a - 1] - y[b - 1]));
    free(x);
    free(y);
    return 0;
}