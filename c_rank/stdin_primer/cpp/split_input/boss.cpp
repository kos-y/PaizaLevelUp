// Paiza 問題集 標準入力メニュー 【半角スペース区切りの入力】半角スペース区切りの 1,000 個の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_input_boss
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    istringstream iss(s);
    string si;
    while (iss >> si) {
        cout << si << endl;
    }

    return 0;
}