// Paiza 問題集 ループメニュー1 a ~ z までを表示 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/loop_problems/loop_problems__print_alpha
#include <stdio.h>

int main()
{
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c\n", c);
    }
    
    return 0;
}