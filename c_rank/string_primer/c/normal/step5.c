// Paiza 問題集 文字列処理メニュー 数値から文字列への変換 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step5
#include <stdio.h>

int main()
{
    long long x, y;
    int n;
    char s[14];
    
    scanf("%lld", &x);
    scanf("%lld", &y);
    scanf("%d", &n);
    snprintf(s, sizeof(s), "%lld", x + y);
    printf("%c\n", s[n - 1]);
    return 0;
}