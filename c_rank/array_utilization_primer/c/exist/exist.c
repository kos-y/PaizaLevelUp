// Paiza 問題集 配列活用メニュー 指定要素があるかの判定 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__exist
#include <stdio.h>
#include <string.h>

int main()
{
    int n, k;
    char r[4] = "No";

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == k) {
            strcpy(r, "Yes");
        }
    }

    printf("%s\n", r);
    return 0;
}