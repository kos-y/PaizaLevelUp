// Paiza 問題集 配列メニュー 配列に含まれている? 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_include_step2
#include <stdio.h>
#include <stdbool.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int a[] = {5, 12, 6, 84, 14, 25, 44, 3, 7, 20};
    int n;
    bool find = false;

    scanf("%d", &n);
    for (int i = 0; i < NUM_ELE(a); i++) {
        if (a[i] == n) {
            find = true;
            break;
        }
    }

    printf("%s\n", find ? "Yes" : "No");
    return 0;
}