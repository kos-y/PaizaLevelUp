// Paiza 問題集 標準出力メニュー 1 行または 2 行の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__n_line_step1
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }

    return 0;
}