// Paiza 問題集 Cランク・スキルチェック過去問題セット 残り物の量 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/c_rank_skillcheck_archive/leftover
#include <stdio.h>

int main()
{
    double m, p, q;

    scanf("%lf %lf %lf", &m, &p, &q);
    printf("%lf\n", m * (100 - p) / 100 * (100 - q) / 100);
    return 0;
}