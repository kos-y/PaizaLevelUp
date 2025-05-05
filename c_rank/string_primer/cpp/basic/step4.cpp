// Paiza 問題集 文字列処理メニュー 文字列の条件判定 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step4
#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    cout << (s == "paiza" ? "YES" : "NO") << endl;
    return 0;
}