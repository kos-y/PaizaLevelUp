// Paiza 問題集 文字列処理メニュー 文字列の書き換え C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step3
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i;
    char c;

    cin >> s;
    cin >> i >> c;
    s[i - 1] = c;
    cout << s << endl;
    return 0;
}