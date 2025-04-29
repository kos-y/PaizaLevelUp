// Paiza 問題集 標準出力メニュー 10 行の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__newline_digit_step4
#include <iostream>
using namespace std;

int main()
{
    int vs[] = {813, 1, 2, 923874, 23648, 782356, 3256, 2342, 24324, 112};
    for (int v : vs) {
        cout << v << endl;
    }
    
    return 0;
}