// Paiza 問題集 文字列処理メニュー 日時データの変換その２ C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step3
#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    regex delim("[: /]");
    sregex_token_iterator it(s.begin(), s.end(), delim, -1);
    sregex_token_iterator end;
    while (it != end) {
        cout << *it << endl;
        ++it;
    }

    return 0;
}