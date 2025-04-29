// Paiza 問題集 標準出力メニュー 10 行以内の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__n_line_step3
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