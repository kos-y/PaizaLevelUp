// Paiza 問題集 配列活用メニュー 内定 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__offer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, m;
    
    scanf("%d %d %d", &n, &k, &m);
    
    int* a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < k) {
            a[i] = 0;
        }
    }
    
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (++c <= m) {
                a[i] = 0;
            }
        }
    }
    
    c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            c++;
        }
    }
    
    printf("%d\n", c);

    free(a);
    return 0;
}
