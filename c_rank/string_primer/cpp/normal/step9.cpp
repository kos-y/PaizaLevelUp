// Paiza 問題集 文字列処理メニュー 文字列の検索 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step9
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s, t;

    cin >> s;
    cin >> t;
    cout << (s.find(t) != string::npos ? "YES" : "NO") << endl;
    return 0;
}