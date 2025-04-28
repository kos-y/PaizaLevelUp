// Paiza 問題集 終了判定 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__complex_step4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d ", &n);
    int* pa = (int*)calloc(n ,sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (pa[i] % 2 != 0) {
            break;
        }

        sum += pa[i];
    }
    
    printf("%d\n", sum);
    return 0;
}