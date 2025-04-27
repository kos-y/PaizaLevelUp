// Paiza 問題集 配列メニュー フィボナッチ数 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__fibo
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* f = (int*)calloc(n, sizeof(int));
    f[1] = 1;
    for (int i = 2; i < n; i++) {
        f[i] = f[i - 2] + f[i - 1];
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", f[i]);
    }

    free(f);
    return 0;
}