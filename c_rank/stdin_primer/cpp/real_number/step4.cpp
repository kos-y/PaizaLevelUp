// Paiza 問題集 標準入力メニュー 2 行目で与えられる N 個の実数の入力 (large) C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__real_number_step4
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);
    istringstream iss(s);
    double a;
    while (iss >> a) {
        cout << a << endl;
    }

    return 0;
}