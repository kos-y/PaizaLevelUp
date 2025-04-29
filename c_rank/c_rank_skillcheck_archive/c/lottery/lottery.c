// Paiza 問題集 Cランク・スキルチェック過去問題セット 宝くじ C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/lottery
#include <stdio.h>

int main()
{
    int b, n;
    
    scanf("%d", &b);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int a;

        scanf("%d", &a);
        if (a == b) {
            printf("first\n");
        } else if (b - 1 <= a && a <= b + 1) {
            printf("adjacent\n");
        } else if (a % 10000 == b % 10000) {
            printf("second\n");
        } else if (a % 1000 == b % 1000) {
            printf("third\n");
        } else {
            printf("blank\n");
        }
    }
    
    return 0;
}