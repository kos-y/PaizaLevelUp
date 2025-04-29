// Paiza 問題集 二重ループメニュー 二重ループ：基本編　積の最大 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/double_roop_problems/double_roop_problems__multi_max
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* input(int n);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* pa = input(n);
    int* pb = input(k);

    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (m < pa[i] * pb[j]) {
                m = pa[i] * pb[j];
            }
        }
    }

    printf("%d\n", m);
    free(pa);
    free(pb);
    return 0;
}

int* input(int n)
{
    int* p = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    return p;
}