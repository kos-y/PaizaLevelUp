// Paiza 問題集 配列メニュー 配列に含まれている? 3 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__search_include_step3
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    bool find = false;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == m) {
            find = true;
        }
    }
    
    printf("%s\n", find ? "Yes" : "No");
    return 0;
}