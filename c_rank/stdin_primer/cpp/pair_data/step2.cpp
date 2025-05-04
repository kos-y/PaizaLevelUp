// Paiza 問題集 標準入力メニュー N 組の整数の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_step2
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a >> b;
        cout << a << " " << b << endl;
    }

    return 0;
}