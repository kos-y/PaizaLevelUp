// Paiza 問題集 配列活用メニュー 要素の種類数 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__kind
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int n, l = 0;

    scanf("%d ", &n);
    int* pk = (int*)calloc(n, sizeof(int));
    memset(pk, -1, sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        int a;
        bool f = false;

        scanf("%d", &a);
        for (int j = 0; pk[j] >= 0 && j < n; j++) {
            if (a == pk[j]) {
                f = true;
                break;
            }
        }

        if (!f) {
            pk[l++] = a;
        }
    }

    printf("%d\n", l);
    free(pk);
    return 0;
}