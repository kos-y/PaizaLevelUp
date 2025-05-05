// Paiza 問題集 文字列処理メニュー 小文字から大文字への変換 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step7
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;

    cin >> s;
    for (char& c : s) {
        c = toupper(c);
    }

    cout << s << endl;
    return 0;
}