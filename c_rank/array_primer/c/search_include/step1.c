// Paiza 問題集 配列メニュー 配列に含まれている? 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_include_step1
#include <stdio.h>
#include <stdbool.h>
#define NUM_ELE(x) sizeof(x) / sizeof(x[0])

int main()
{
    int a[] = {10, 13, 21, 1, 6, 51, 10, 8, 15, 6};
    bool find = false;

    for (int i = 0; i < NUM_ELE(a); i++) {
        if (a[i] == 6) {
            find = true;
            break;
        }
    }

    printf("%s\n", find ? "Yes" : "No");
    return 0;
}