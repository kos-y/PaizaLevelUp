// Paiza 問題集 配列活用メニュー 全ての要素を用いた処理 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__reduce
#include <stdio.h>
#include <stdlib.h>

int* input(int n);
void output(int* a, int n);

int main()
{
    int n;

    scanf("%d ", &n);
    int* a = input(n);
    output(a, n);
    free(a);    
    return 0;
}

int* input(int n)
{
    int* a = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

void output(int* a, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d\n", a[i] * a[j]);
        }
    }
}
