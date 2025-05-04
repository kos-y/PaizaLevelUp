// Paiza 問題集 標準入力メニュー 10 個の整数の半角スペース区切りの入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__integer_space_step4
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    istringstream iss(s);
    int n;
    while (iss >> n) {
        cout << n << endl;
    }

    return 0;
}