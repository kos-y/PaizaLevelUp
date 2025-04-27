// Paiza 問題集 配列メニュー ある数以上以下の要素の列挙 3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__array_ave_step3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
        sum += pa[i];
    }

    double ave = (double)sum / (double)n;
    for (int i = 0; i < n; i++) {
        if ((double)pa[i] >= ave) {
            printf("%d\n", pa[i]);
        }
    }

    free(pa);
    return 0;
}