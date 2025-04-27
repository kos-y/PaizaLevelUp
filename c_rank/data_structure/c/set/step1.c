// Paiza 問題集 データセット選択メニュー 集合の探索 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step1
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, b;
    bool f = false;
    
    scanf("%d %d", &n, &b);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == b) {
            f = true;
            break;
        }
    }

    printf("%s\n", f ? "Yes" : "No");
    return 0;
}