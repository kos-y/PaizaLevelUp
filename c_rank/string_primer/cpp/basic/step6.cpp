// Paiza 問題集 文字列処理メニュー 文字の検索 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step6
#include <iostream>
using namespace std;

int main()
{
    string s;
    char c;

    cin >> s;
    cin >> c;
    cout << (s.find(c) + 1) << endl;
    return 0;
}