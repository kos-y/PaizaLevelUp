// Paiza 問題集 標準入力メニュー 【N 個の整数の入力】1 行目で与えられる N 個の整数の入力 (large) C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__integer_number_boss
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string a;
    getline(cin, a);

    istringstream iss(a);
    int ai;
    while (iss >> ai) {
        cout << ai << endl;
    }

    return 0;
}