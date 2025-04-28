// Paiza 問題集 配列活用メニュー 配列の順序の反転 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__reverse
#include <stdio.h>
#include <stdlib.h>

int* input(int n);
int* reverse(int* a, int n);
void output(int* a, int n);

int main()
{
    int n;

    scanf("%d", &n);
    int* a = input(n);
    int* b = reverse(a, n);
    output(b, n);
    free(a);
    free(b);
    return 0;
}

int* input(int n)
{
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}

int* reverse(int* a, int n)
{
    int* b = (int*)malloc(sizeof(int) * n);

    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        b[j] = a[i];
    }

    return b;
}

void output(int* a, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
