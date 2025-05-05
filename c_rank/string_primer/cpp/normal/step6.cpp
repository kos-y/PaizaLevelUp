// Paiza 問題集 文字列処理メニュー 大文字から小文字への変換 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step6
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;

    cin >> s;
    for (char& c : s) {
        c = tolower(c);
    }

    cout << s << endl;
    return 0;
}