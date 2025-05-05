// Paiza 問題集 文字列処理メニュー 文字列の反転 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step10
#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}