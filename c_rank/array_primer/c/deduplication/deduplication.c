// Paiza 問題集 配列メニュー 重複の削除 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__deduplication
#include <stdio.h>
#include <stdlib.h>

#define NUM_ELE(x) (sizeof(x) / sizeof(x[0]))

int cmp(const void* a, const void* b);

int main()
{
    int a[] = {1, 3, 5, 1, 2, 3, 6, 6, 5, 1, 4};
    int prev = -1;
    
    qsort(a, NUM_ELE(a), sizeof(int), cmp);
    for (int i = 0; i < NUM_ELE(a); i++) {
        if (prev != a[i]) {
            printf("%d\n", a[i]);
            prev = a[i];
        }
    }
    
    return 0;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}