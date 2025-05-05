// Paiza 問題集 文字列処理メニュー 数値判定 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step4
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    cout << (all_of(s.begin(), s.end(), ::isdigit) ? "YES" : "NO") << endl;
    return 0;
}